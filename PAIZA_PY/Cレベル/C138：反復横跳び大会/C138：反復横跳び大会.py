n = int(input("生徒の数を表す整数Nを入力："))
kirokuKazu = [0] * n
kirokuKazuCmp = [0] * n
kirokuKazuRank = [0] * n
for i in range(0, n):
    kirokuKazu[i] = int(input("i番目の生徒の反復横跳びの記録を表す整数aを入力："))
    kirokuKazuCmp[i] = kirokuKazu[i]

for j in range(0, n*n):
    for k in range(0, n-1):
        if(kirokuKazuCmp[k+1] >= kirokuKazuCmp[k]):
            temp = kirokuKazuCmp[k+1]
            kirokuKazuCmp[k+1] = kirokuKazuCmp[k]
            kirokuKazuCmp[k] = temp

for l in range(0, n):
    for m in range(l+1, n):
        if(kirokuKazuCmp[l] == kirokuKazuCmp[m]):
            kirokuKazuCmp[m] = 0

for o in range(0, n):
    for p in range(0, n):
        if(kirokuKazu[o] == kirokuKazuCmp[p]):
            kirokuKazuRank[o] = p+1

for rank in kirokuKazuRank:
    print(rank)
