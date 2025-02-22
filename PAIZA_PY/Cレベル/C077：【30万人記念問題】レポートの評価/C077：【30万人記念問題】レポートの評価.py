import re
k, n = input("学生の人数を表す整数Kとレポートの問題数を表す整数Nを入力：").split()

dK, aK = [0] * int(k), [0] * int(k)
for i in range(int(k)):
    dK[i], aK[i] = input("〇番目の学生のレポートを提出した日を表す整数Dとその学生が正解した問題数を表す整数Aを入力：").split()
    aK[i] = int(aK[i])

    tokuTen = (aK[i] / int(n)) * 100
    nissuStr = "".join(re.findall(r'\d+', dK[i]))
    if('-' not in dK[i] and int(nissuStr) >= 0 and int(nissuStr) <= 9):
        tokuTen -= tokuTen * 0.2
    elif('-' not in dK[i] and int(nissuStr) >= 10):
        tokuTen = 0

    if(tokuTen >= 80 and tokuTen <= 100):
        print('A')
    elif(tokuTen >= 70 and tokuTen <= 79):
        print('B')
    elif(tokuTen >= 60 and tokuTen <= 69):
        print('C')
    else:
        print('D')