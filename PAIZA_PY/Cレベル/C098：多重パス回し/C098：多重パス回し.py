n = int(input("人数を表す整数Nを入力："))
kosuuList = [0] * n
for i in range(0, n):
    kosuuList[i] = int(input("人iが最初に持っているボールの個数を表す整数を入力："))

m = int(input("パス回しの情報の数を表す整数Mを入力："))
aI, bI, xI = [0] * m, [0] * m, [0] * m
for j in range(0, m):
    temp = input("パス回しの情報を表す3つの整数を入力：")
    aI[j], bI[j], xI[j] = temp.split(" ")

for k in range(1, n+1):
    for l in range(0, m):
        if(k == int(aI[l])):
            for o in range(1, n+1):
                if(o == int(bI[l])):
                    if(int(xI[l]) > kosuuList[k-1]):
                        kosuuList[o-1] += kosuuList[k-1]
                        kosuuList[k-1] = 0
                    else:
                        kosuuList[o-1] += int(xI[l])
                        kosuuList[k-1] -= int(xI[l])

                print(kosuuList)