import bhaskara

class TestBhaskara: #importante Test maiusculo para o pytest entender que é um teste
    
    def testa_uma_raiz(self):
        b = bhaskara.Bhaskara()
        assert b.calcula_raizes(1,0,0)==(1,0)

    