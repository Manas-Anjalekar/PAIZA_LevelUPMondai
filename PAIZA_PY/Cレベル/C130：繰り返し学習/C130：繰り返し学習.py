# C130：繰り返し学習

n = int(input("問題数を表す整数Nを入力："))
a, b = [0], [0]
for i in range(1, n+1):
    aTemp, bTemp = input().split()
    a.insert(i, aTemp)
    b.insert(i, bTemp)

    print("A[", a[i], "] B[", b[i], "]")

tokuMondai = [0]
for j in range(1, 4):
    if(a[j] != 'y' or b[j] != 'y'):
        tokuMondai.insert(j, j)

while():