futanTotal = 0
a, b, n = input("新幹線の片道の料金を表す整数A、ホテルの一泊当たりの料金を表す整数B、インターンシップの回数を表す整数Nを入力：").split()

xI, yI = [0] * int(n), [0] * int(n)
for i in range(0, int(n)):
    xI[i], yI[i] = input("インターンシップの初日を表す整数Xと最終日を表す整数Yを入力：").split()

    if(i == 0):
        futanTotal += 2 * int(a)
    else:
        if(2 * int(a) < int(b) * ((int(yI[i]) - int(xI[i])) - 1)):
            futanTotal += 2 * int(a)
        else:
            futanTotal += int(b) * ((int(yI[i]) - int(xI[i])) - 1)
    
print(futanTotal)