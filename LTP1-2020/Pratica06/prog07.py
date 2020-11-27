numero_secreto = 42

acertou = False
while acertou == False:
  chute = int(input("Informe seu chute:"))
  if chute > numero_secreto:
    print('Errou! É mais baixo')
  elif chute < numero_secreto:
    print("Errou! É mais alto")
  else:
    acertou = True
    print("Acertou!")

print("Obrigado por jogar!")
