#include<stdio.h>
int main(void){
  int n = 0, atariValue = 0, shuuKaiSu = 0, k = 0;
  printf("教習車の台数を表す整数Nを入力：");
  scanf("%d", &n);

  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(int j = 0; j < n; j++){
    for(int k = 0; k < n; k++){
      if(a[k] < a[j]){
        printf("K[%d] J[%d]\n", a[k], a[j]);
        atariValue++;
      }
      // if(atariValue == sizeof(a[0])){
      //   shuuKaiSu++;
      // }else{
      //   printf("%d\n", atariValue);
      // }
    }
  }

  // printf("%d\n", n - shuuKaiSu);
  return 0;
}
