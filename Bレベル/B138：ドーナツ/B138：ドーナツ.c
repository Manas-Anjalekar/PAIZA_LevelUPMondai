#include<stdio.h>
int main(void){
  int h = 0, w = 0, counter = 0;
  printf("縦方向のマス数を表す整数Hを入力：　");
  scanf("%d", &h);
  printf("横方向のマス数を表す整数Wを入力：　");
  scanf("%d", &w);
  char Etable[h][w+1];
  printf("文字列を入力：　");
  for(int i = 0; i < h; i++){
    for(int j = 0; j <= w; j++){
      scanf("%c", &Etable[i][j]);
    }
  }

  for(int hTemp = 0; hTemp < h; hTemp++){
    for(int i = 0; i <= w; i++){
      if(Etable[hTemp][i] == '#'){
        if(Etable[hTemp][i+1] == '#'){
          if(Etable[hTemp][i+2] == '#'){
            if(Etable[hTemp+2][i] == '#'){
              if(Etable[hTemp+2][i+1] == '#'){
                if(Etable[hTemp+2][i+2] == '#'){
                  if(Etable[hTemp+1][i] == '#'){
                    if(Etable[hTemp+1][i+1] == '.'){
                      if(Etable[hTemp+1][i+2] == '#'){
                        counter++;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  printf("%d\n", counter);
  return 0;
}
