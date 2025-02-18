n = int(input("日数Nを入力："))

sN, eN, hN, lN = [0] * n, [0] * n, [0] * n, [0] * n
for i in range(0, n):
    temp = input("1日間の4種類の株価のデータを入力：")
    sN[i], eN[i], hN[i], lN[i] = temp.split(" ")
    hN[i] = int(hN[i])
    lN[i] = int(lN[i])

print(sN[0], eN[n-1], max(hN), min(lN))