nCardZandaka = int(input("はじめにチャージされている金額を表す整数Nを入力："))
mBusKaisuu = int(input("バスの乗車回数を表す整数Mを入力："))

fUnchin = [0] * mBusKaisuu
paicaPoint = 0
for i in range(0, int(mBusKaisuu)):
    fUnchin[i] = int(input(""))

    if(paicaPoint < fUnchin[i]):
        nCardZandaka = int(nCardZandaka) - fUnchin[i]
        paicaPoint += fUnchin[i] * 0.1
    else:
        paicaPoint = paicaPoint - fUnchin[i]
    print(nCardZandaka, int(paicaPoint))