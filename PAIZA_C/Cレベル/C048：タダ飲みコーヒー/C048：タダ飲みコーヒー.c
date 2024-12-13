#include<stdio.h>
int main(void){
  int x = 0, p = 0, tadaNomiKakaku = 0;
  printf("コーヒーの価格を示す整数Xを入力：");
  scanf("%d", &x);
  printf("割引き率を示す整数Pを入力：");
  scanf("%d", &p);

  while(x != 0){
    tadaNomiKakaku += x;
    x = (x * (100 - p)) / 100;
  }

  printf("%d\n", tadaNomiKakaku);
  return 0;
}
