n = int(input("販売されている花の本数を表す整数Nを入力："))
hanaShurui = [] * n
aHana = 0
bHana = 0

hanaShurui = input("〇番目の花の種類を入力：").split()
for hanaShuruiKazu in hanaShurui:
    if(hanaShuruiKazu == 'A'):
        aHana += 1
    elif(hanaShuruiKazu == 'B'):
        bHana += 1

if(aHana < bHana):
    print(aHana)
elif(bHana <= aHana):
    print(bHana)
