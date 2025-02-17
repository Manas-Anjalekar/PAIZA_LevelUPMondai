temp = input("株の売買条件を表す整数を入力：")
n, c1, c2 = temp.split(" ")

pKabuka = [0] * int(n)
mochiKabu = 0
rieki = 0
for i in range(0, int(n)):
    pKabuka[i] = int(input("株価を表す整数Pを入力："))

for j in range(0, int(n)):
    if(pKabuka[j] <= int(c1)):
        if(j == int(n) - 1):
            rieki += mochiKabu * pKabuka[j]
            mochiKabu = 0
        else:
            mochiKabu += 1
            rieki -= pKabuka[j]
    elif(pKabuka[j] >= int(c2)):
        rieki += mochiKabu * pKabuka[j]
        mochiKabu = 0

print(rieki)

