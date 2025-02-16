S = input("文字列を入力：")

s1, s2, s3 = S.split("-")

dialTotal = 0

def getDialTotal(sChar):
    dial = 0
    if(sChar == '0'):
        dial += 24
    else:
        dial += 2 * (int(sChar) + 2)
        
    return dial

for sChar in s1:
    dialTotal += getDialTotal(sChar)
for sChar in s2:
    dialTotal += getDialTotal(sChar)
for sChar in s3:
    dialTotal += getDialTotal(sChar)
    
print(dialTotal)