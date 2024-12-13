#include<stdio.h>
#include<math.h>
int main(void){
  int n = 0, m = 0, k = 0, q = 0;
  printf("パラメータNの個数を入力：");
  scanf("%d", &n);
  printf("ユーザーの人数を表す整数Mを入力：");
  scanf("%d", &m);
  printf("トップを表す整数Kを入力：");
  scanf("%d", &k);

  float c[n], x[n], totalValue[m];
  for(int i = 0; i < n; i++){
    scanf("%f", &c[i]);
  }

  for(int q = 0; q < m; q++){
    float s = 0;
    for(int j = 0; j < n; j++){
      scanf("%f", &x[j]);

      s += c[j]*x[j];
    }
    totalValue[q] = s;
  }


  for(int l = 0; l < m*n; l++){
    int o = 0;
    while(o+1 != m){
      int temp = 0;
      if(totalValue[o] <= totalValue[o+1]){
        temp = totalValue[o];
        totalValue[o] = totalValue[o+1];
        totalValue[o+1] = temp;
      }
      o++;
    }
  }

  for(int p = 0; p < k; p++){
    if(totalValue[p] - (int)totalValue[p] < 0.5){
      printf("%d\n", (int)totalValue[p]);
    }else{
      totalValue[p] += 1;
      printf("%d\n", (int)totalValue[p]);
    }
  }
  return 0;
}
