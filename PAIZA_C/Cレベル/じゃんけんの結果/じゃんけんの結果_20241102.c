#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, win = 0;
  char jankenA[4], jankenB[4];
  printf("要素数Nを入力：");
  scanf("%d", &n);
  while(n != 0){
    scanf("%s", &jankenA);
    scanf("%s", &jankenB);
    if(strcmp(jankenA, "G") == 0){
      if(strcmp(jankenB, "C") == 0){
        win++;
      }else{
        // 飛ばす
      }
    }else if(strcmp(jankenA, "C") == 0){
      if(strcmp(jankenB, "P") == 0){
        win++;
      }else{
        // 飛ばす
      }
    }else if(strcmp(jankenA, "P") == 0){
      if(strcmp(jankenB, "G") == 0){
        win++;
      }else{
        // 飛ばす
      }
    }else{
      printf("マッチしていない。");
    }
    n--;
  }
  printf("じゃんけんの結果は。。。\n");
  printf("%d\n", win);
  return 0;
}
