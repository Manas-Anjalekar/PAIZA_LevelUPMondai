#include<stdio.h>
#include<string.h>
void delete(char str[], char stampString[]);
int main(void){
  int h = 0, w = 0, n = 0;
  printf("スタンプの縦の大きさを表す整数Hを入力：");
  scanf("%d", &h);
  printf("スタンプの横の大きさを表す整数Wを入力：");
  scanf("%d", &w);
  printf("スタンプの個数を表す整数Nを入力：");
  scanf("%d", &n);
  char stamp[h][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= h*w; j++){
      scanf("%c", &stamp[i][j]);
      printf("H[%d] N[%d] %c\n", i, j, stamp[i][j]);
    }
  }


  int r = 0, c = 0;
  printf("アートの予定図の縦の大きさを表す整数Rを入力：");
  scanf("%d", &r);
  printf("アートの予定図の横の大きさを表す整数Cを入力：");
  scanf("%d", &c);
  int artYoteiZu[r][c];

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &artYoteiZu[i][j]);
      printf("R[%d] C[%d] %d\n", i, j, artYoteiZu[i][j]);
    }
  }


  return 0;
}


void delete(char str[], char stampString[]){
  while(*str){
    if(*str != ' ' || *str != '\n'){
      *stampString = *str;
      stampString++;
    }
    str++;
  }
  *stampString = '\0';
}
