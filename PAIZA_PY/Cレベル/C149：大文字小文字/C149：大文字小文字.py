s = input("校正ルール表を表す文字列Sを入力：")
t = input("校正前の文字列を表すTを入力：")

for sChar in s:
    for tChar in t:
        if(sChar == tChar.upper() or sChar == tChar.lower()):
            t = t.replace(tChar, sChar)
print(t)