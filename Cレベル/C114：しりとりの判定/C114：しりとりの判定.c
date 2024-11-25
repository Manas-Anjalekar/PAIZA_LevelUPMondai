#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, atari = 0;
  printf("入力される単語の数Nを入力：");
  scanf("%d", &n);

  char s[n][50];
  for(int i = 0; i < n; i++){
      scanf("%s", &s[i]);
  }

  int j = 0;
  while(j != n && j+1 != n){
    if(s[j][strlen(s[j])-1] == s[j+1][0]){
      atari++;
    }else{
      atari = 0;
      printf("%c %c\n", s[j][strlen(s[j])-1], s[j+1][0]);
      break;
    }
    j++;
  }

  if(atari >= 1){
    printf("Yes\n");
  }
  return 0;
}
