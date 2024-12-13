#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, m = 0;
  printf("レシピに書かれている食材の数を表す整数Nを入力：");
  scanf("%d", &n);
  char a[n][100];
  int b[n], tsukureruValue[n];
  for(int i = 0; i < n; i++){
    scanf("%s %d", &a[i], &b[i]);
  }


  printf("あなたが所持している食材の数を表す整数Mを入力：");
  scanf("%d", &m);
  char c[m][100];
  int d[m];
  for(int j = 0; j < m; j++){
    scanf("%s %d", &c[j], &d[j]);
  }

  for(int k = 0; k < n; k++){
    for(int l = 0; l < m; l++){
      if(strcmp(a[k], c[l]) == 0){
        tsukureruValue[k] = d[l] / b[k];
      }
    }
  }

  for(int o = 0; o < n*n; o++){
    int temp = 0, p = 0;
    while(p + 1 != n){
      if(tsukureruValue[p] >= tsukureruValue[p+1]){
          temp = tsukureruValue[p+1];
          tsukureruValue[p+1] = tsukureruValue[p];
          tsukureruValue[p] = temp;
      }
      p++;
    }
  }

  printf("%d\n", tsukureruValue[0]);
  return 0;
}
