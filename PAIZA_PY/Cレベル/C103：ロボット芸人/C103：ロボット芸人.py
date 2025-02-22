n, m = input("ロボットが作動する時間を表す整数N、ロボットの動作の規則の数を表す整数Mを入力：").split()

aM, bM = [0] * int(m), [''] * int(m)
for i in range(int(m)):
    aM[i], bM[i] = input("〇番目のロボットの動作の規則を表す整数Aおよび動作名を表す文字列Bを入力：").split()

foundKazu = 0
for k in range(1, int(n)+1):
    foundStr = []
    for j in range(int(m)):
        if(k == int(aM[j]) or k % int(aM[j]) == 0):
            foundKazu = k
            foundStr.append(bM[j])
    if(foundKazu != k):
        print(k)
    else:
        print(*foundStr)