m = int(input("Aのライブ日数を表す整数Mを入力："))
aI = [0] * m
for i in range(0, m):
    aI[i] = int(input("バンドAのi番目のライブの日を表す整数aを入力："))

n = int(input("Bのライブ日数を表す整数Nを入力："))
bI = [0] * n
for i in range(0, n):
    bI[i] = int(input("バンドBのi番目のライブの日を表す整数aを入力："))

kabuttaHiKazu = 0
for j in range(1, 32):
    if j in aI:
        if j in bI:
            kabuttaHiKazu += 1
            if kabuttaHiKazu % 2 == 0:
                print("B")
            else:
                print("A")
        else:
            if j in aI:
                print("A")
            elif j in bI:
                print("B")
    else:
        if j in aI:
            print("A")
        elif j in bI:
            print("B")
        else:
            print("x")
    if j in aI:
        if j in bI:
            kabuttaHiKazu += 1
            if kabuttaHiKazu % 2 == 0:
                print("B")
            else:
                print("A")
        else:
            if j in aI:
                print("A")
            elif j in bI:
                print("B")
    else:
        print("x")