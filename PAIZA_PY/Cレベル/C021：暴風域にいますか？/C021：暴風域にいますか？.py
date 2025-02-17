temp = input("問題文で説明された変数をすべて入力：")
xC, yC, r1, r2 = temp.split(" ")

n = int(input("与えられる人の数を表す整数Nを入力："))
xN, yN = [0] * n, [0] * n
for i in range(0, n):
    temp = input("人の座標を表す整数を入力：")
    xN[i], yN[i] = temp.split(" ")

    xZahyo = (int(xN[i]) - int(xC)) ** 2
    yZahyo = (int(yN[i]) - int(yC)) ** 2
    if(xZahyo + yZahyo >= (int(r1) ** 2) and xZahyo + yZahyo <= (int(r2) ** 2)):
        print("yes")
    else:
        print("no")