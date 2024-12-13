#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, temp = 0;
  char s[10];
  printf("食べたい料理名を表す文字列Sを入力：　");
  scanf("%s", s);
  printf("メニューの単語数を表す整数Nを入力：　");
  scanf("%d", &n);
  char ryouriMei[n];
  printf("メニュー名を表す単語の文字列Tを入力：　");
  for(int i = 0; i < n; i++){
    scanf("%s", &ryouriMei);
    if(strcmp(ryouriMei, s) == 0){
      temp++;
    }else{
      // 飛ばす
    }
  }
  if(temp > 0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
