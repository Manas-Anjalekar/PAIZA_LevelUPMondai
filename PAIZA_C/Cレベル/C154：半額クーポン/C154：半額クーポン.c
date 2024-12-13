#include<stdio.h>
int main(void){
  int n = 0, l = 0, lastKakaku = 0;
  printf("購入した商品の数を表す整数Nを入力：");
  scanf("%d", &n);
  printf("クーポンの適用可能価格の下限を表す整数Lを入力：");
  scanf("%d", &l);

  int u[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &u[i]);
  }

  for(int m = 0; m < n; m++){
    int k = 0;
    while(k+1 != n){
      int temp = 0;
      if(u[k] < u[k+1]){
        temp = u[k];
        u[k] = u[k+1];
        u[k+1] = temp;
      }
      k++;
    }
  }

for(int j = 0; j < n; j++){
  printf("\n価格[%d]：%d\n", j, u[j]);
  lastKakaku += u[j];
}

  if(u[0] >= l){
    printf("%d\n", lastKakaku - (u[0] / 2));
  }else{
    printf("%d\n", lastKakaku);
  }
  return 0;
}
