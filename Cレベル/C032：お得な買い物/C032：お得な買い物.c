#include<stdio.h>
int main(void){
  int n = 0, goukeiTotal = 0;
  int shokuTotal = 0, shosekiTotal = 0, iruiTotal = 0, hokaTotal = 0;
  printf("購入した商品の総数を表すNを入力：");
  scanf("%d", &n);

  int v[n], p[n];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &v[i], &p[i]);

    if(v[i] == 0){
      shokuTotal += p[i];
    }else if(v[i] == 1){
      shosekiTotal += p[i];
    }else if(v[i] == 2){
      iruiTotal += p[i];
    }else if(v[i] == 3){
      hokaTotal += p[i];
    }
  }

  goukeiTotal = ((shokuTotal / 100) * 5) + ((shosekiTotal / 100) * 3) + ((iruiTotal / 100) * 2) + ((hokaTotal / 100) * 1);
  printf("%d\n", goukeiTotal);
  return 0;
}
