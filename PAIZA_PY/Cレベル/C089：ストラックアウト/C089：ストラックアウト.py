hW = input("それぞれストラックアウトの高さ、幅を表す整数を入力：")
h, w = hW.split(" ")

s = [''] * int(h)
p = [''] * int(h)
for i in range(0, int(h)):
    s[i] = input("半角アルファベット'o'および'x'からなる長さWの文字列を入力：")
for j in range(0, int(h)):    
    p[j] = input("W個の整数を入力：")

uchinukeretaScore = 0
for k in range(0, int(h)):
    p1, p2, p3 = p[k].split(" ")
    if(s[k][0] == 'o'):
        uchinukeretaScore += int(p1)
    if(s[k][1] == 'o'):
        uchinukeretaScore += int(p2)
    if(s[k][2] == 'o'):
        uchinukeretaScore += int(p3)    
print(uchinukeretaScore)