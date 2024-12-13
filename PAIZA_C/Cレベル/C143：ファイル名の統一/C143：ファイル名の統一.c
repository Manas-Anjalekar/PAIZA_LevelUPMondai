#include<stdio.h>
#include<string.h>
int main(void){
  char s[100], s1[100];
  printf("ファイル名を表す文字列Sを入力：");
  scanf("%s", &s);

  int s1_cnt = 0;
  for(int s_cnt = 0; s[s_cnt] != '\0'; s_cnt++){
    if(s[s_cnt] == '-' && s[s_cnt + 1] != '-'){
      s1[s1_cnt] = s[s_cnt];
      ++s1_cnt;
    }else if(s[s_cnt] != '-' && s[s_cnt + 1] == '-'){
      s1[s1_cnt] = s[s_cnt];
      ++s1_cnt;
    }else if(s[s_cnt] != '-' && s[s_cnt + 1] != '-'){
      s1[s1_cnt] = s[s_cnt];
      ++s1_cnt;
    }else{
      if(s[s_cnt + 2] == '-'){
        if(s[s_cnt + 3] == '-'){
          if(s[s_cnt + 4] == '-'){
            if(s[s_cnt + 5] == '-'){
              s1[s1_cnt] = s[s_cnt];
              ++s1_cnt;
              s_cnt+= 5;
            }else{
              s1[s1_cnt] = s[s_cnt];
              ++s1_cnt;
              s_cnt+= 4;
            }
          }else{
            s1[s1_cnt] = s[s_cnt];
            ++s1_cnt;
            s_cnt+= 3;
          }
        }else{
          s1[s1_cnt] = s[s_cnt];
          ++s1_cnt;
          s_cnt+= 2;
        }
      }else{
        s1[s1_cnt] = s[s_cnt];
        ++s1_cnt;
        s_cnt++;
      }
    }
  }
  s1[s1_cnt] = '\0';

  printf("%s\n", s1);
  return 0;
}
