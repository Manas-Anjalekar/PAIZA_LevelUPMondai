n = int(input("参加者の人数を表す整数Nを入力："))
nenreiY = [0] * n
mameKazu = [0] * n
for i in range(0, n):
    nenreiY[i] = int(input("参加者の年齢を表す整数Yを入力："))

m = int(input("命令の数を表す整数Mを入力："))
a, b, c = [0] * m, [0] * m, [0] * m
for j in range(0, m):
    temp = input("命令を表す整数A、B、Cを入力：")
    a[j], b[j], c[j] = temp.split(" ")

    for k in range(int(a[j]) - 1, int(b[j])):
        if(mameKazu[k] + int(c[j]) <= nenreiY[k]):
            mameKazu[k] += int(c[j])
        else:
            mameKazu[k] = nenreiY[k]

for mame in mameKazu:
    print(mame)