n = int(input("家の数を表す整数Nを入力："))
d = int(input("ご挨拶に伺う範囲の距離Dを入力："))

x = input("PAIZAさんの家の座標Xを入力：")
y = input("PAIZAさんの家の座標Yを入力：")

machiX, machiY = [0] * n, [0] * n
ieNum = 0
for i in range(0, n):
    temp = input("町に建っている家の座標X,Yを入力：")
    machiX[i], machiY[i] = temp.split(" ")

    if(abs(int(x) - int(machiX[i])) + abs(int(y) - int(machiY[i])) < d):
        ieNum += 1

print(ieNum)