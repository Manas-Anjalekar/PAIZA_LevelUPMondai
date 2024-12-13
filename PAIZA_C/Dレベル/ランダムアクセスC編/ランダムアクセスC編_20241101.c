#include <stdio.h>
int main(void){
    int n = 0, m = 0;
    printf("要素数Nを入力: ");
    scanf("%d", &n);
    printf("数値Mを入力: ");
    scanf("%d", &m);
    int a[n];
    printf("数列Aを入力: ");
    for(int i=0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("希望の%d番目の値を獲得完了。\n", m);
    printf("%d\n", a[m-1]);
    return 0;
}
