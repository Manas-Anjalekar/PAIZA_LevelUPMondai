#include <stdio.h>
#include <stdlib.h>

int miYasuiSekiRes(int n, int pListK, int pListR, int qListK, int qListR);

int main(void){
    int n = 0, h = 0, w = 0, p = 0, q = 0;
    printf("既に予約されている座席の数Nを入力：");
    scanf("%d", &n);
    printf("映画館の座席の縦の数Hを入力：");
    scanf("%d", &h);
    printf("映画館の座席の横の数Wを入力：");
    scanf("%d", &w);
    printf("最も見やすい席のP座標を入力：");
    scanf("%d", &p);
    printf("最も見やすい席のQ座標を入力：");
    scanf("%d", &q);

    

    int pList[n], qList[n], miYasuiSekiList[h][w], miYasuiSekiListAsc[h][w];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &pList[i], &qList[i]);
    }

    printf("見やすい席リスト：\n");
    for (int x = 0; x < h; x++)
    {
        for(int y = 0; y < w; y++){
            miYasuiSekiList[x][y] = abs(p - x) +abs(q - y), x, y;
            printf("X[%d] Y[%d] %d\t", x, y, miYasuiSekiList[x][y]);
        }
        printf("\n");
    }
    
    printf("\n\n");

    printf("見やすい席リストAsc：\n");
    for (int k = 0; k < h; k++)
    {
        int s = 0;
        while(s != w && s + 1 <= w){
    //         int temp = 0;
    //         if(miYasuiSekiListAsc[k][s] >= miYasuiSekiListAsc[k][s+1]){
    //             temp = miYasuiSekiListAsc[k][s+1];
    //             miYasuiSekiListAsc[k][s+1] = miYasuiSekiListAsc[k][s];
    //             miYasuiSekiListAsc[k][s] = temp;
    //         }
            if(k != pList[k] && s != qList[s]){
                printf("K[%d] P[%d] S[%d] Q[%d]\n", k, pList[s], s, qList[s]);
            }
            s++;
        }
        printf("\n");
    }
    
    return 0;
}

int miYasuiSekiRes(int n, int pListK, int pListR, int qListK, int qListR){
    for (int r = 0; r < n; r++){
        if(pListK != pListR && qListK != qListR){
            printf("%d %d\n", pListK, qListK);
        }
    }
}