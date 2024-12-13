#include<stdio.h>
#include<string.h>
int main(void){
  int m = 0;
  printf("入力されるIPアドレスの数Mを入力：");
  scanf("%d", &m);

  char address[100];
  for(int i = 0; i < m; i++){
    scanf("%s", &address);

    int j = 0, trueCounter = 0;
    while(j != strlen(address) && j + 1 <= strlen(address)){
      if(address[j-1] >= '0' && address[j-1] <= '9' && address[j] == '.' && address[j+1] >= '0' && address[j+1] <= '9'){
        trueCounter++;
      }
      j++;
    }

    if(trueCounter == 3){
      printf("True\n");
    }else{
      printf("False\n");
    }
  }

  for(int j = 0; j < m; j++){

  }
  return 0;
}
