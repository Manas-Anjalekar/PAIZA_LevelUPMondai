atK, deF, agI = input("モンスターの現在の攻撃力、防護力、素早さを表す3つの整数を入力：").split(" ")
n = int(input("進化先のモンスター数を表す整数Nを入力："))

s, minAtk, maxAtk, minDef, maxDef, minAgi, maxAgi = [''] * n, [0] * n, [0] * n, [0] * n, [0] * n, [0] * n, [0] * n
monsterKazu = 0
for i in range(0, n):
    s[i], minAtk[i], maxAtk[i], minDef[i], maxDef[i], minAgi[i], maxAgi[i] = input("").split(" ")

    if(int(atK) >= int(minAtk[i]) and int(atK) <= int(maxAtk[i])):
        if(int(deF) >= int(minDef[i]) and int(deF) <= int(maxDef[i])):
            if(int(agI) >= int(minAgi[i]) and int(agI) <= int(maxAgi[i])):
                print(s[i])
                monsterKazu += 1
                
if(monsterKazu == 0):
    print("no evolution")