algoritmo "comandos_logicos"
// Fun��o :   testes de comandos l�gicos
// Autor :    Danilo
// Data : 06/01/2019
// Se��o de Declara��es 
var
          A, B, C: inteiro
          L1, L2, L3: real
          EQ, ES, IS, tri : logico
inicio
// Se��o de Comandos 
A<-1
B<-2
C<-3
escreval((A>B) ou (B<C))
// emendamos com outro exerc�cios: tri�ngulos
// equi�tero, isosceles e escaleno
   Escreva ("Digite o primeiro lado: ")
   Leia (L1)
   Escreva ("Digite o segundo lado: ")
   Leia (L2)
   Escreva ("Digite o terceiro e �ltimo lado: ")
   Leia (L3)
   EQ<-(L1=L2) e (L2=L3)
   ES<- (L1<>L2) e (L2<>L3) e (L3<>L1)
   IS<-((L1=L2) e (L2<>L3)) ou ((L2=L3) e (L3<>L1)) ou ((L3=L1) e (L1<>L2))
   Escreval("O tri�ngulo, se for tri�ngulo, �:")
   Escreval("Equil�tero ----- ", EQ)
   Escreval("Escaleno ------- ", ES)
   Escreval("Is�sceles ------ ", IS)
   tri<-(L1<L1+L2) e (L2<L3+L1) e (L3<L1+L2)
   Escreval("� poss�vel cormar um tri�ngulo com estes valores ------ ", tri)



fimalgoritmo
