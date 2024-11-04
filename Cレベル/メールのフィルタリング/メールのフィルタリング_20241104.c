#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0;
  char s[10];
  printf("広告と判定するワードSを入力：　");
  scanf("%s", &s);
  printf("メールの件数Nを入力：　");
  scanf("%d", &n);
  char sen[1000], *tok;
  printf("タイトルを入力：　");
  for(int i = 0; i < n; i++){
    scanf("%s", &sen);
    int j = 0;
    do(){
      if(s[n] == sen[n]){
        if(s[j+1] == sen[j+1]){
          if
        }
      }
    }while(j != n)
  }
  return 0;
}
