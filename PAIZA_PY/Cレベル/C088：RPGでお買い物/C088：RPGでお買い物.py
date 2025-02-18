n = int(input("道具の個数を表す整数Nを入力："))

a = [0] * n
a = input("N個の各道具の単位を入力：").split(" ")

t, q = input("最初の所持金を表す整数Tと注文回数を表す整数Qを入力：").split(" ")
t = int(t)
x, k = [0] * int(q), [0] * int(q)
for i in range(0, int(q)):
    x[i], k[i] = input("購入したい道具の番号を表す整数Xとその個数Kを入力：").split(" ")

    if(int(k[i]) * int(a[int(x[i]) - 1]) <= t):
        t -= int(k[i]) * int(a[int(x[i]) - 1])

print(t)