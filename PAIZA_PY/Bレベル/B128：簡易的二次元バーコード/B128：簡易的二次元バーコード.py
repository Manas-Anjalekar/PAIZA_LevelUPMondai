n = int(input("二次元バーコードで表現すべき数値を表す整数Nを入力："))

barcodeTableLine1 = []
barcodeTableLine2 = []
barcodeTableLine3 = []
for nBunKatsu in str(n):

    if(nBunKatsu == '1'):
        barcodeTableLine1.append('#..')
        barcodeTableLine2.append('...')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '2'):
        barcodeTableLine1.append('##.')
        barcodeTableLine2.append('...')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '3'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('...')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '4'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('#..')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '5'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('##.')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '6'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('###')
        barcodeTableLine3.append('...')
    elif(nBunKatsu == '7'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('###')
        barcodeTableLine3.append('#..')
    elif(nBunKatsu == '8'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('###')
        barcodeTableLine3.append('##.')
    elif(nBunKatsu == '9'):
        barcodeTableLine1.append('###')
        barcodeTableLine2.append('###')
        barcodeTableLine3.append('###')

digitAdd, digitAdd2, digitAdd3 = 0, 2, 3
for barCodeLen in range(0, int(len(barcodeTableLine1) / 3)):
    for i in barcodeTableLine1[int(barCodeLen)+digitAdd:int(barCodeLen)+digitAdd2]:
        print(i, end="")
    print(*barcodeTableLine1[int(barCodeLen)+digitAdd2:int(barCodeLen)+digitAdd3])
    for j in barcodeTableLine2[int(barCodeLen)+digitAdd:int(barCodeLen)+digitAdd2]:
        print(j, end="")
    print(*barcodeTableLine2[int(barCodeLen)+digitAdd2:int(barCodeLen)+digitAdd3])
    for k in barcodeTableLine3[int(barCodeLen)+digitAdd:int(barCodeLen)+digitAdd2]:
        print(k, end="")
    print(*barcodeTableLine3[int(barCodeLen)+digitAdd2:int(barCodeLen)+digitAdd3])
    
    digitAdd += 2
    digitAdd2 += 2
    digitAdd3 += 2