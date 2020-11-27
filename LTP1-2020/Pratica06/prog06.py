
mouse = input("Seu mouse tem RGB?")
teclado = input("Seu teclado tem RGB?")
monitor = input("Seu monitor tem RGB?")

# = uma ordem de atribuição
#== uma pergunta de igualdade

if mouse == 's' and teclado == 's' and monitor == 's':
  print('SEM DUVIDAS')
  
#O elif é um else condicionado. Ele vai verificar sua pergunta se a pergunta anterior
#a ele, de um if ou outro elif, for falsa. Só executa seu bloco se a pergunta for verdadeira

elif mouse == 'n' and teclado == 's' and monitor == 'n':
  print('meio termo')
elif mouse == 's' and teclado == 'n' and monitor == 'n':
  print('quase normal')
elif mouse == 'n' and teclado == 'n' and monitor == 'n':
  print('sem chance')
else:
  print('Sem classificação')
