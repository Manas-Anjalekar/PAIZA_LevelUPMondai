#include<stdio.h>
int main(void){
  int n= 0, k = 0, atariValue = 0;
  printf("当選番号の数を表す整数Nを入力：");
  scanf("%d", &n);
  printf("投票の数を表す整数Kを入力：");
  scanf("%d", &k);

  int w[n], v[k];
  for(int i = 1; i <= n; i++){
    scanf("%d", &w[i]);
  }
  for(int j = 1; j <= k; j++){
    scanf("%d", &v[j]);
  }
  for(int l = 1; l <= n; l++){
    for(int m = 1; m <= k; m++){
      if(v[m] == w[l]){
        atariValue++;
        printf("%d\n", m);
      }
    }
  }

  if(atariValue == 0){
    printf("-1\n");
  }
  return 0;
}
