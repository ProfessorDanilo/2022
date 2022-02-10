algoritmo "CriancaEsperanca"
// Função :  receber doações para tal projeto
// Autor :    Danilo
// Data : 07/01/2019
// Seção de Declarações 
var
   D: inteiro
   valor: real
inicio
// Seção de Comandos 
   Escreval("-------------------------")
   Escreval("   CRIANÇA ESPERCANÇA")
   Escreval("-------------------------")
   Escreval("Muito Obrigado por ajudar")
   Escreval(" [1] para doar R$10 ")
   Escreval(" [2] para doar R$25 ")
   Escreval(" [3] para doar R$50 ")
   Escreval(" [4] para doar outros valores ")
   Escreval(" [5] para cancelar")
   Leia (D)
   Escolha D
          caso 1
               valor <- 10
          caso 2
               valor <- 25
          caso 3
               valor <- 50
          caso 4
               Escreval("Qual o valor da doação?")
               Leia(valor)
          caso 5
               valor <- 0
   Fimescolha
   
   Escreval("-------------------------")
   Escreval(" Sua doação foi de R$", valor:2:2)
   Escreval("    MUITO OBRIGADO!!!")
   Escreval("-------------------------")
   
   
   
fimalgoritmo
