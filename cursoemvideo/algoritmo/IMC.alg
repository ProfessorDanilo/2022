algoritmo "IMC"
// Fun��o :   calcular o imc
// Autor :    Danilo
// Data : 07/01/2019
// Se��o de Declara��es 
var
       massaminima, massamaxima, massa, altura, imc: real
       opcao: inteiro
inicio
// Se��o de Comandos
   Escreva("Digite sua massa em kg: ")
   Leia(massa)
   Escreva("Digite sua altura em metros: ")
   Leia(altura)
   imc <- massa/(altura^2)
   escreval("Seu IMC � ", imc:5:2)
   se (imc>=18.5) e (imc<=25) entao
      escreval("Parab�ns! Voc� est� no peso ideal.")
   senao
        se (imc>25) entao
           escreval("Voc� precisa emagrescer...")
        senao
           escreval("Voc� deve ganhar peso...")
        fimse
   fimse
   
   massaminima <- 18.5*altura^2
   massamaxima <- 25*altura^2
   escreval("Sua massa deve estar entre ", massaminima:2:2, " kg e ", massamaxima:2:2, " kg.")
   
   escreval("Mais detalhes? 1/0")
   leia(opcao)
   se opcao=1 entao
      escreval("abaixo de 17 ----- Muito abaixo do peso")
      escreval("entre 17 e 18.5 -- Abaixo do peso")
      escreval("de 18.5 a 25 ----- Peso ideal")
      escreval("de 25 a 30 ------- Sobrepeso")
      escreval("de 30 a 35 ------- Obesidade")
      escreval("de 35 a 40 ------- Obesidade severa")
      escreval("40 ou mais ------- Obesidade morbida")
   senao
        se opcao=0 entao
           escreva("Programa encerrado pelo usu�rio.")
        senao
             escreva("Op��o inv�lida, programa encerrado.")
        fimse
   fimse

      
fimalgoritmo
