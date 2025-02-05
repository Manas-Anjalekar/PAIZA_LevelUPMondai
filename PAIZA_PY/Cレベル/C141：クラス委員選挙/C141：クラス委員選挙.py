from collections import defaultdict

n = int(input("クラスの人数を表す整数Nを入力："))
classmateName = [] * n
tohyoDict = defaultdict(int)
for i in range(0, n):
    classmateName = input("i番目の生徒が投票したクラスメートの名前を入力：")
    tohyoDict[classmateName] += 1

tohyoDictSorted = sorted(tohyoDict.items(), key=lambda x:x[1])
k, v = tohyoDictSorted.pop(-1)
print(k)
