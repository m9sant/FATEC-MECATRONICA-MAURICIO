somatoria = 0
contador = 0
maior = 0
menor = 0
continuar = True
while continuar == True:
  valor = int(input("Valor:"))
  
  #Adiciona o valor na somatoria
  
  somatoria += valor #somatoria = somatoria + valor
  contador += 1 #contador = contador + 1
  
  #Para verificar se é o primeiro numero informado 
  
  if contador == 1:
    maior = valor
    menor = valor
  else:
    if valor > maior:
      maior = valor
    elif valor < menor:
      menor = valor
  continuar = input("Continuar?") == 's'

media = somatoria/contador
print("Media:", media)
print("Maior:", maior)
print("Menor:", menor)
