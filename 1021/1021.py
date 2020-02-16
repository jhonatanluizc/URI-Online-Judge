total = float(input())
real = int(total)
moedas = int((total - real) * 100)
print("NOTAS:")
troco = int(real / 100)
real = real % 100
print(troco, "nota(s) de R$ 100.00")
troco = int(real / 50)
real = real % 50
print(troco, "nota(s) de R$ 50.00")
troco = int(real / 20)
real = real % 20
print(troco, "nota(s) de R$ 20.00")
troco = int(real / 10)
real = real % 10
print(troco, "nota(s) de R$ 10.00")
troco = int(real / 5)
real = real % 5
print(troco, "nota(s) de R$ 5.00")
troco = int(real / 2)
real = real % 2
print(troco, "nota(s) de R$ 2.00")
troco = int(real / 1)
real = real % 1
print("MOEDAS:")
print(troco, "moeda(s) de R$ 1.00")
troco = int(moedas / 50)
moedas = moedas % 50
print(troco, "moeda(s) de R$ 0.50")
troco = int(moedas / 25)
moedas = moedas % 25
print(troco, "moeda(s) de R$ 0.25")
troco = int( moedas / 10)
moedas = moedas % 10
print(troco, "moeda(s) de R$ 0.10")
troco = int(moedas / 5)
moedas = moedas % 5
print(troco, "moeda(s) de R$ 0.05")
troco = int(moedas / 1)
moedas = moedas % 1
print(troco, "moeda(s) de R$ 0.01")
