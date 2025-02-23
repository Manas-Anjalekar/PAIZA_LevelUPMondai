import math

n = int(input("部屋の一辺の板の数を表す整数Nを入力："))
# sN = [list(map(int, input("板に積まれた石の数を表す整数Sを入力：").split())) for i in range(n)]

pyramidMiddle = int((n+1)/2)
pyramidTable = [[pyramidMiddle if j == k and j+1 == pyramidMiddle else 0 for k in range(n)] for j in range(n)]
jRef, kRef = (n - pyramidMiddle), (n - pyramidMiddle)
for j in range(n):
    for k in range(n):
        middleKyori = math.sqrt((jRef - j) ** 2 + (kRef - k) ** 2)
        pyramidTable[j][k] = pyramidMiddle - int(middleKyori)
        if(pyramidTable[j][k] == 0):
            if(j == 0 or k == 0 or j == n - 1 or k == n - 1):
                pyramidTable[j][k] = 1

totalKazu = 0
for l in range(n):
    print(*pyramidTable[l])
#     for m in range(n):
#         sN[l][m] -= pyramidTable[l][m]
#         totalKazu += sN[l][m]

# print(totalKazu)
