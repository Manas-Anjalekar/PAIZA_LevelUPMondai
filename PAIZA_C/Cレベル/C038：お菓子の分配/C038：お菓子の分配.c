#include<stdio.h>
int main(void){
  int m = 0, n = 0, atariKazu = 0;
  printf("機械の数を表す整数Mを入力：");
  scanf("%d", &m);
  printf("詰め込むお菓子の数を表す整数Nを入力：");
  scanf("%d", &n);

  int a[m], amari[m], amariAsc[m], aDesc[m];
  for(int i = 1; i <= m; i++){
    scanf("%d", &a[i]);

    amari[i] = n % a[i];
    amariAsc[i] = amari[i];
  }

  for(int j = 1; j <= m; j++){
    int temp = 0, k = 1;
    while(k <= m && k+1 <= m){
      if(amariAsc[k] > amariAsc[k+1]){
        temp = amariAsc[k+1];
        amariAsc[k+1] = amariAsc[k];
        amariAsc[k] = temp;
      }
      k++;
    }
  }

  for(int l = 1; l <= m; l++){
    if(amari[l] == amariAsc[1]){
      aDesc[l] = a[l];
      atariKazu++;
    }
  }

  int temp = 0, k = 1;
  while(k <= atariKazu && k+1 <= atariKazu){
    if(aDesc[k] < aDesc[k+1]){
      temp = aDesc[k+1];
      aDesc[k+1] = aDesc[k];
      aDesc[k] = temp;
    }
    k++;
  }

  for(int o = 1; o <= m; o++){
    if(amari[o] == amariAsc[1]){
      if(a[o] == aDesc[1]){
          printf("%d\n", o);
      }else{
        printf("%d\n", o);
      }
    }
  }
  return 0;
}
