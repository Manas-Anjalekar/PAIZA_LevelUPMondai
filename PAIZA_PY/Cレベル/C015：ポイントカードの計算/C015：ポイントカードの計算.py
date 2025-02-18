n = int(input("各レシートの数を入力："))

dN, pN = [0] * n, [0] * n
cardPoint = 0
for i in range(0, n):
    temp = input("〇枚目のレシートの日付と購入金額を入力：")
    dN[i], pN[i] = temp.split(" ")
    pN[i] = int(pN[i])

    if('3' in dN[i]):
        cardPoint += int(pN[i] * 0.03)
    elif('5' in dN[i]):
        cardPoint += int(pN[i] * 0.05)
    else:
        cardPoint += int(pN[i] * 0.01)

print(cardPoint)