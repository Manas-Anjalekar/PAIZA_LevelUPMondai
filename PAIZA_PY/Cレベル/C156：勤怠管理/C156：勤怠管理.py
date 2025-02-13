n = int(input("研究室に通った日数Nを入力："))
nyushitsuJikoku = [0] * n
taishitsuJikoku = [0] * n
zaishitsuJikoku = [0] * n
totalJikanSum = 0
for i in range(0, n):
    temp = input("入室時間eと退室時間lを入力：")
    nyushitsuJikoku[i], taishitsuJikoku[i] = temp.split(" ")

    taishitsuJikokuHours, taishitsuJikokuMin = taishitsuJikoku[i].split(":")
    nyushitsuJikokuHours, nyushitsuJikokuMin = nyushitsuJikoku[i].split(":")
    zaishitsuJikoku[i] = (int(taishitsuJikokuHours) * 60 + int(taishitsuJikokuMin)) - (int(nyushitsuJikokuHours) * 60 + int(nyushitsuJikokuMin))

    totalJikanSum += zaishitsuJikoku[i]

print(int(totalJikanSum / 60), (totalJikanSum % 60))
