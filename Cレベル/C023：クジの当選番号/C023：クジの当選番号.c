#include<stdio.h>
int main(void){

  int tousenBango[6];
  printf("くじの当選番号6つを入力：");
  for(int i = 0; i < 6; i++){
    scanf("%d", &tousenBango[i]);
  }

  int n = 0;
  printf("あなたの購入したくじの枚数を表す整数を入力：");
  scanf("%d", &n);

  int kujiBango[n][6];
  for(int j = 0; j < n; j++){
    int atariValue = 0;
    for(int k = 1; k <= 6; k++){
      scanf("%d", &kujiBango[j][k]);

      int l= 0;
      while(l != 6){
        if(kujiBango[j][k] == tousenBango[l]){
          atariValue++;
        }
        l++;
      }
    }
    printf("%d\n", atariValue);
  }


  return 0;
}
