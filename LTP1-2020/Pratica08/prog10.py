preco = input("Preço:")
real = ""
centavos = ""
achei_virgula = False
for caracter in preco:
  if caracter != ',':
    if achei_virgula == False:
      real = real + caracter
    else:
      centavos = centavos + caracter
  else:
    achei_virgula = True

if achei_virgula == True:
  print("Reais:", real, "Centavos:", centavos)
else:
  print("Reais:", real)
