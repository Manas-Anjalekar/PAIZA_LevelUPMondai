n = int(input("雨水を溜める箱の数を表す整数Nを入力："))
suiShin = [] * n
sum = 0
result = 0

suiShin = input("〇番目の箱の水深を入力：").split()
for num in suiShin:
    sum += int(num)

result = sum / n 
if (result - int(result)) > 0:
    print(int(result) + 1)
else:
    print(int(result))