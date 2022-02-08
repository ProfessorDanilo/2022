####Danilo 2019
##
##
##Você conhece o jogo do NIM? Nesse jogo, n peças são inicialmente
##dispostas numa mesa ou tabuleiro. Dois jogadores jogam alternadamente,
##retirando pelo menos 1 e no máximo m peças cada um. Quem tirar as
##últimas peças possíveis ganha o jogo.
##
##Existe uma estratégia para ganhar o jogo que é muito simples: ela consiste em deixar sempre múltiplos de (m+1) peças ao jogador oponente.
##
##Objetivo
##Você deverá escrever um programa na linguagem Python, versão 3, que permita a uma "vítima" jogar o NIM contra o computador. O computador, é claro, deverá seguir a estratégia vencedora descrita acima.
##
##Sejam n o número de peças inicial e m o número máximo de peças que é possível retirar em uma rodada. Para garantir que o computador ganhe sempre, é preciso considerar os dois cenários possíveis para o início do jogo:
##
##Se n é múltiplo de (m+1), o computador deve ser "generoso" e convidar o jogador a iniciar a partida com a frase "Você começa"
##Caso contrário, o computador toma a inciativa de começar o jogo.
##Uma vez iniciado o jogo, a estratégia do computador para ganhar consiste em deixar sempre um número de peças que seja múltiplo de (m+1) ao jogador. Caso isso não seja possível, deverá tirar o número máximo de peças possíveis.
##
##Seu trabalho, então, será implementar o Jogo e fazer com que o computador se utilize da estratégia vencedora.
##
##Seu Programa
##Com o objetivo do EP já definido, uma dúvida que deve surgir nesse momento é como modelar o jogo de forma que possa ser implementado em Python 3 correspondendo rigorosamente às especificações descritas até agora.
##
##Para facilitar seu trabalho e permitir a correção automática do exercício, apresentamos a seguir um modelo, isto é, uma descrição em linhas gerais de um conjunto de funções que resolve o problema proposto neste EP. Embora sejam possíveis outras abordagens, é preciso atender exatamente o que está definido abaixo para que a correção automática do trabalho funcione corretamente.
##
##O programa deve implementar:
##
##Uma função computador_escolhe_jogada que recebe, como parâmetros, os números n e m descritos acima e devolve um inteiro correspondente à próxima jogada do computador de acordo com a estratégia vencedora.
##Uma função usuario_escolhe_jogada que recebe os mesmos parâmetros, solicita que o jogador informe sua jogada e verifica se o valor informado é válido. Se o valor informado for válido, a função deve devolvê-lo; caso contrário, deve solicitar novamente ao usuário que informe uma jogada válida.
##Uma função partida que não recebe nenhum parâmetro, solicita ao usuário que informe os valores de n e m e inicia o jogo, alternando entre jogadas do computador e do usuário (ou seja, chamadas às duas funções anteriores). A escolha da jogada inicial deve ser feita em função da estratégia vencedora, como dito anteriormente. A cada jogada, deve ser impresso na tela o estado atual do jogo, ou seja, quantas peças foram removidas na última jogada e quantas restam na mesa. Quando a última peça é removida, essa função imprime na tela a mensagem "O computador ganhou!" ou "Você ganhou!" conforme o caso.
##Observe que, para isso funcionar, seu programa deve sempre "lembrar" qual é o número de peças atualmente no tabuleiro e qual é o máximo de peças a retirar em cada jogada.
##
##Cuidado: o corretor automático não funciona bem se você tiver alguma chamada a input() antes da definição de todas as funções do jogo (a menos que essa chamada esteja dentro de uma função). Se seu programa usar input() sem que ele esteja dentro de alguma função, coloque-o no final do programa.
##
##Campeonatos
##Como todos sabemos, uma única rodada de um jogo não é suficiente para definir quem é o melhor jogador. Assim, uma vez que a função partida esteja funcionando, você deverá criar uma outra função chamada campeonato. Essa nova função deve realizar três partidas seguidas do jogo e, ao final, mostrar o placar dessas três partidas e indicar o vencedor do campeonato. O placar deve ser impresso na forma
##
##Placar: Você ??? X ??? Computador



        
def usuario_escolhe_jogada(a, m):
    while a>m or a<0:
        a=int(input('Jogada inválida, por favor escolha outro número'))
    return(a)


def computador_escolhe_jogada(n, m):
    retira_pc = 1

    while retira_pc != m:
        if (n - retira_pc) % (m+1) == 0:
            return retira_pc

        else:
            retira_pc = retira_pc+ 1

    return retira_pc

def partida():
    i=1
    pc=0
    vc=0
    print('***  RODADA {}   ***'.format(i))
    n=int(input('Quantas peças?\t'))
    m=int(input('Limite de peças por jogada?\t'))
##    while m>n:
##        print('\nO limite de peças por jogada deve ser inferior ao número de peças do tabuleiro.')
##        m=int(input('Por favor, escolha outro valor para o limite de peças por jogada:\t'))
        
    
    if n%(m+1)==0:
        pc_venceu=usuario_escolhe_jogada_2(n,m)
    else:
        pc_venceu=computador_escolhe_jogada_2(n, m)
    if pc_venceu:
        pc=pc+1
        ultimo_a_jogar='pc'
    else:
        vc=vc+1
        ultimo_a_jogar='vc'
        
    while i < 3:
        i=i+1
        print('***  RODADA {}   ***'.format(i))
        n=int(input('Quantas peças?'))
        m=int(input('Limite de peças por jogada?\n'))
##        while m>n:
##            print('O limite de peças por jogada deve ser inferior ao número de peças do tabuleiro.')
##            m=int(input('Por favor, escolha outro valor para o limite de peças por jogada:\t'))
        
        if ultimo_a_jogar=='pc':
            pc_venceu=usuario_escolhe_jogada_2(n,m)
        else:
            pc_venceu=computador_escolhe_jogada_2(n, m)
        if pc_venceu:
            pc=pc+1
            ultimo_a_jogar='pc'
        else:
            vc=vc+1
            ultimo_a_jogar='vc'


    print('\n*** Final do campeonato! ***\n')
    print('Placar: Você {} x {} Computador'.format(vc, pc))






def computador_escolhe_jogada_2(n, m):
    print('\nComputador começa!\n')
    a=n      #renomeando variáveis para terem seus valores alterados
    b=m
    computador=False     #computador ganhou?
    while a>=1:
        if a-m-1<=m and a-m-1>0 and a-m-1<=a:
            retira_pc=a-(m+1)
        else:
            retira_pc=m
            while a-retira_pc<0:
                retira_pc=retira_pc-1
        a=a-retira_pc
        print('O computador retirou {} peça(s)'.format(retira_pc))
        if a==0:
            print('Fim do jogo! O computador ganhou\n')
            computador=True
            return(computador)
            break
        else:
            print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))

        retira_vc=int(input('Quantas peças você vai tirar?'))
        while retira_vc>m:
            print('Oops! Jogada inválida! Tente de novo.')
            retira_vc=int(input('Quantas peças você vai tirar?\n'))
        print('\nVocê tirou {} peça(s)'.format(retira_vc))
        a=a-retira_vc
        if a==0:
            print('Fim do jogo! Você ganhou\n')
            computador=False
            return(computador)
            break
        else:
            print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))


def usuario_escolhe_jogada_2(n, m):
    print('\nVocê começa!\n')
    a=n
    b=m
    computador=False
    while a>=1:
        retira_vc=int(input('Quantas peças você vai tirar?'))
        while retira_vc>m:
            print('Oops! Jogada inválica! Tente de novo.')
            retira_vc=int(input('Quantas peças você vai tirar?\n'))
        print('\nVocê tirou {} peça(s)'.format(retira_vc))
        a=a-retira_vc
        if a==0:
            print('Fim do jogo! Você ganhou\n')
            computador=False
            return(computador)
            break
        else:
            print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))

        if a-m-1<=m and a-m-1>0:
            retira_pc=a-(m+1)
        else:
            retira_pc=m
            while a-retira_pc<0:
                retira_pc=retira_pc-1
        a=a-retira_pc
        print('O computador retirou {} peça(s)'.format(retira_pc))
        if a==0:
            print('Fim do jogo! O computador ganhou\n')
            computador=True
            return(computador)
            break
        else:
            print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))





def main():

#APRESENTAÇÃO
    print('Bem-vindo ao jogo do NIM! Escolha:\n')
#MENU DE ESCOLHAS
    print('1 - para jogar uma partida isolada')
    print('2 - para jogar um campeonato\n')
    escolha=int(input())
#VERIFICAÇÃO SE AS ESCOLHAS SÃO PERTINENTES
    while escolha!=1 and escolha!=2:
        escolha=int(input('Selecione uma opção válida 1/2.\t'))

#CASO DA ESCOLHA 1
    if escolha==1:
        n=int(input('Quantas peças?'))
        a=n
        m=int(input('Limite de peças por jogada?'))
###CASO HAJA CONFLITO NO NÚMERO DE PEÇAS
##        while m>n:
##            print('O limite de peças por jogada deve ser inferior ao número de peças do tabuleiro.')
##            m=int(input('Por favor, escolha outro valor para o limite de peças por jogada:\t'))

#INÍCIO DO JOGO

#CASO VOCÊ COMECE
        if n%(m+1)==0:
            print('\nVocê começa!\n')
            while a>=1:
                retira_vc=int(input('Quantas peças você vai tirar?'))
                retira_vc=usuario_escolhe_jogada(retira_vc,m)
                print('\nVocê tirou {} peça(s)'.format(retira_vc))
                a=a-retira_vc
                if a==0:
                    print('Fim do jogo! Você ganhou\n')
                    break
                else:
                    print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))
                retira_pc=computador_escolhe_jogada(a, m)
                print('O computador retirou {} peça(s)'.format(retira_pc))
                a=a-retira_pc
                if a==0:
                    print('Fim do jogo! O computador ganhou\n')
                else:
                    print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))

#CASO O PC COMECE
        else:
            print('\nComputador começa!\n')
            while a>=1:
                retira_pc=computador_escolhe_jogada(a, m)
                print('O computador retirou {} peça(s)'.format(retira_pc))
                a=a-retira_pc
                if a==0:
                    print('Fim do jogo! O computador ganhou\n')
                else:
                    print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))
                retira_vc=int(input('Quantas peças você vai tirar?'))
                retira_vc=usuario_escolhe_jogada(retira_vc,m)
                print('\nVocê tirou {} peça(s)'.format(retira_vc))
                a=a-retira_vc
                if a==0:
                    print('Fim do jogo! Você ganhou\n')
                    break
                else:
                    print('Agora restam apenas {} peça(s) no tabuleiro.\n'.format(a))
               
#CASO DA ESCOLHA 2 (CAMPEONATO)
    else:
        print('Você escolheu um campeonato!\n')
        partida()

