y = int(input("計算を始める基準日の年を表す整数yを入力："))
m = int(input("計算を始める基準日の月を表す整数mを入力："))
d = int(input("計算を始める基準日の日を表す整数dを入力："))
a = int(input("次の開催日の月を表す整数aを入力："))
b = int(input("次の開催日の日を表す整数bを入力："))

kaisaiKetteiToshi = []
for kaisaiToshi in range(y, y+100):
    if(kaisaiToshi % 4 == 1):
        kaisaiKetteiToshi.append(kaisaiToshi)

totalMonthNissu = 0
for getsu in range(m, (((kaisaiKetteiToshi[0] - y)*13) + a)):
    if(getsu != m and getsu != a):
        if(getsu % 2 == 0):
            totalMonthNissu += 15
        else:
            totalMonthNissu += 13

if(m % 2 == 0):
    totalNissu = totalMonthNissu + (15 - d) + b
else:
    totalNissu = totalMonthNissu + (13 - d) + b
print(totalNissu)