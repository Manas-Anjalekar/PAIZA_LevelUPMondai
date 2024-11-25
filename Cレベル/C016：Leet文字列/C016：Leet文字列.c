#include<stdio.h>
#include<string.h>
int main(void){
  char s[50];
  printf("Leetに変換する前の文字列を入力：");
  scanf("%s", &s);

  for(int i = 0; i < strlen(s); i++){
    if(s[i] == 'A'){
      s[i] = '4';
    }else if(s[i] == 'E'){
      s[i] = '3';
    }else if(s[i] == 'G'){
      s[i] = '6';
    }else if(s[i] == 'I'){
      s[i] = '1';
    }else if(s[i] == 'O'){
      s[i] = '0';
    }else if(s[i] == 'S'){
      s[i] = '5';
    }else if(s[i] == 'Z'){
      s[i] = '2';
    }
  }

  printf("%s\n", s);
  return 0;
}
