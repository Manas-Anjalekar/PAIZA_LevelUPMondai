nKazu = int(input("文字列の数Nを入力："))
gMojiretsu = input("抽出する対象の重要な文字列Gを入力：")

foundKazu = 0
for i in range(0, nKazu):
    sMojiretsu = input("ログの内容である文字列Sを入力：")

    if(gMojiretsu in sMojiretsu):
        foundKazu += 1
        print(sMojiretsu)
        
if(foundKazu == 0):
    print("None")
