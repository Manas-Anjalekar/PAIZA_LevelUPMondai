n = int(input("ユーザーIDの個数を表す整数Nを入力："))

sMojiretsu = [""] * n 
sMojiretsuNum = [0] * n
for i in range(0, n):
    sMojiretsu[i] = input("ユーザーのユーザーIDを表す文字列Sを入力：")

    sMojiretsuNum[i] = int("".join(map(str, [int(i) for i in sMojiretsu[i] if i.isdigit()])))
    sMojiretsuNumSorted = sorted(sMojiretsuNum)
    
for sMojiSort in sMojiretsuNumSorted:
    for j in range(0, n):
        if(sMojiSort == sMojiretsuNum[j]):
            print(sMojiretsu[j])