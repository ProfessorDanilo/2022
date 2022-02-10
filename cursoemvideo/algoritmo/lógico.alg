algoritmo "comandos_logicos"
// Função :   testes de comandos lógicos
// Autor :    Danilo
// Data : 06/01/2019
// Seção de Declarações 
var
          A, B, C: inteiro
          L1, L2, L3: real
          EQ, ES, IS, tri : logico
inicio
// Seção de Comandos 
A<-1
B<-2
C<-3
escreval((A>B) ou (B<C))
// emendamos com outro exercícios: triângulos
// equiátero, isosceles e escaleno
   Escreva ("Digite o primeiro lado: ")
   Leia (L1)
   Escreva ("Digite o segundo lado: ")
   Leia (L2)
   Escreva ("Digite o terceiro e último lado: ")
   Leia (L3)
   EQ<-(L1=L2) e (L2=L3)
   ES<- (L1<>L2) e (L2<>L3) e (L3<>L1)
   IS<-((L1=L2) e (L2<>L3)) ou ((L2=L3) e (L3<>L1)) ou ((L3=L1) e (L1<>L2))
   Escreval("O triângulo, se for triângulo, é:")
   Escreval("Equilátero ----- ", EQ)
   Escreval("Escaleno ------- ", ES)
   Escreval("Isósceles ------ ", IS)
   tri<-(L1<L1+L2) e (L2<L3+L1) e (L3<L1+L2)
   Escreval("É possível cormar um triângulo com estes valores ------ ", tri)



fimalgoritmo
