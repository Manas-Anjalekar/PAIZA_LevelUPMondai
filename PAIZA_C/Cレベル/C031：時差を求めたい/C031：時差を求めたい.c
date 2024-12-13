#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
  int n = 0, genchiJikoku = 0;
  printf("都市の総数を表す整数Nを入力：");
  scanf("%d", &n);

  char p[n][100], q[100], t[100];
  int s[n], hh = 0, mm = 0;
  for(int i = 0; i < n; i++){
    scanf("%s %d", &p[i], &s[i]);
  }

  printf("投稿を行ったユーザーの所在地の都市の名前を表す文字列qを入力：");
  scanf("%s", &q);
  printf("現地時間での投稿時刻を表す文字列tを入力：");
  scanf("%s", &t);

  for(int j = 0; j < n; j++){
    if(strcmp(q, p[j]) == 0){
      genchiJikoku = s[j];
    }
  }
  for(int k = 0; k != strlen(t); k++){
    if(t[k] == ':'){
      hh = (t[k-2] - '0')*10 + (t[k-1] - '0');
      mm = (t[k+1] - '0')*10 + (t[k+2] - '0');
    }
  }

  for(int l = 0; l < n; l++){
    int finalHour = 0;
    finalHour = hh + (s[l] - genchiJikoku);
    if(finalHour <= 9){
        if(finalHour < 0){
            if(finalHour + 24 >= 10){
                if(mm == 0){
                    printf("%d:%d0\n", finalHour + 24, mm);
                }else{
                    printf("%d:%d\n", finalHour + 24, mm);
                }
            }else{
                if(mm == 0){
                    printf("0%d:%d0\n", finalHour + 24, mm);
                }else{
                    printf("0%d:%d\n", finalHour + 24, mm);
                }
            }
        }else{
            if(mm == 0){
                printf("0%d:%d0\n", finalHour, mm);
            }else{
                printf("0%d:%d\n", finalHour, mm);
            }
        }
    }else{
        if(mm == 0){
            printf("%d:%d0\n", finalHour, mm);
        }else{
            printf("%d:%d\n", finalHour, mm);
        }
    }
  }
  return 0;
}
