import os
from this import d
from PyPDF2 import PdfFileReader, PdfFileMerger

merger = PdfFileMerger()

while True:
  menu = input("Precisa de ajuda? (S/N)")
  print()
  if(menu == "S" or menu == "s"):    
    print("Para renomear adequadamente os arquivos, selecione todos, do último para o primeiro.")
    print("Clique com o botão da direita do mouse no primeiro arquivo e selecione 'Renomear' e digite o nome escolhido.")
    print("Por padrão o nome dos arquivos será o que você escolher, porém o windows colocará (1), (2), etc na frente.")
    print("Quando o programa for executado, digite exatamente o nome que você escolheu quando perguntado qual o nome inicial do arquivo.")
    print("Siga as instruções que aparecerem na tela...")
    break
  if(menu == "N" or menu == "n"):
    break
  else:
    print("Digite S para sim ou N para não.")


nomeEntrada = str(input("Digite o nome inicial de todos os arquivos: "))
print()

numeroArquivos = int(input("Digite o número de arquivos a serem juntados: "))
print()

####### criando os nomes dos arquivos a serem lidos
filename = [nomeEntrada + " (1).pdf"]
for i in range(1, numeroArquivos):
  filename.append(nomeEntrada + " (" + str(i + 1) + ").pdf")
print(filename)

nomeSaida = str(input("Digite o nome do arquivo de saída: "))

#####ler os arquivos pdf
for i in range(0, numeroArquivos):
  merger.append(PdfFileReader(filename[i], "rb"))
merger.write(os.path.join(nomeSaida + ".pdf"))