n, m = input("学生の人数を表す整数Nと合格点数を表す整数Mを入力：").split()

aN, bN = [0] * int(n), [0] * int(n)
for i in range(0, int(n)):
    aN[i], bN[i] = input("学籍番号Iの学生のテストの点数を表す整数Aと欠席回数を表す整数Bを入力：").split()

    seisekiMarks = int(aN[i]) - 5 * int(bN[i])
    if(seisekiMarks < 0):
        seisekiMarks = 0
    
    if(seisekiMarks >= int(m)):
        print(i+1)