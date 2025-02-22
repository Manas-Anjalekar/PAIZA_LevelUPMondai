n = int(input("すべての観光名所の数を表す整数Nを入力："))

xN = [0] * n
for i in range(n):
    xN[i] = int(input("観光名所の滞在時間を表す整数Xを入力："))

cN = [list(map(int, input("観光名所への移動時間を入力：").split())) for i in range(n)]

k = int(input("行きたい観光名所の数を表す整数Kを入力："))
yK = [0] * k
shoyoJikan, idoJikan, totalJikan = 0, 0, 0
for j in range(k):
    yK[j] = int(input("行きたい観光名所を表す整数Yを入力："))

for l in range(k):
    for m in range(n):
        if(yK[l] - 1 == m):
            print("所要時間 ", yK[l], m, xN[m])
            shoyoJikan += xN[m]
    for o in range(n):
        if(l+1 != k and yK[l+1] - 1 == o):
            print("移動時間 ", yK[l+1], o, cN[l][o])
            idoJikan += cN[l][o]

totalJikan += (shoyoJikan + idoJikan)
print(totalJikan)