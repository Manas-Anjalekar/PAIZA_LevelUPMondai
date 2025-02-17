temp = input("カードの枚数Mと、シャッフルを行う回数Nを入力：")
m, n = temp.split(" ")

tabaList, zenshaList, koshaList = [0] * int(m), [0] * int(int(m) / 2), [0] * int(int(m) / 2)
for i in range(0, int(m)):
    tabaList[i] = i+1

for q in range(0, int(n)):
    k = 0
    for j in range(0, int(m)):
        if(j < int(int(m) / 2)):
            zenshaList[j] = tabaList[j]
        else:
            koshaList[k] = tabaList[j]
            k += 1

    o, p = 0, 0
    for l in range(0, int(m)):
        if(l % 2 == 0):
            tabaList[l] = koshaList[o]
            o += 1
        else:
            tabaList[l] = zenshaList[p]
            p += 1

print(*tabaList, sep=" ")