## para criar executável execute o arquivo setup.py usando o comando, dentro da pasta:
## py setup.py build


#este cabeçalho é da segunda parte do programa
from cx_Freeze import setup, Executable
import sys
import os




### ABAIXO UMA TENTATIVA DE MUDANÇA

##
os.environ['TCL_LIBRARY'] = r"C:\Users\Danilo\AppData\Local\Programs\Python\Python36-32\tcl\tcl8.6"
os.environ['TK_LIBRARY'] = r"C:\Users\Danilo\AppData\Local\Programs\Python\Python36-32\tcl\tk8.6"



##
####para fazer isso manualmente
##set TCL_LIBRARY = C:\Users\Danilo\AppData\Local\Programs\Python\Python36-32\tcl\tcl8.6
##set TK_LIBRARY =  C:\Users\Danilo\AppData\Local\Programs\Python\Python36-32\tcl\tk8.6












### ABAIXO CÓDIGO PARA ISSO, MAS DEU ERRO DO TLC_LIBRARY


base = None

if sys.platform == 'win32':
    base = None


executables = [Executable("unicamp1997.py", base=base)]

packages = ["idna"]
options = {
    'build_exe': {

        'packages':packages,
    },

}

setup(
    name = "Colisão bidimensional",
    options = options,
    version = "1.0",
    description = 'Colisão bidimensional: simulação de uma colisão para uma questão do vestibular da Unicamp de 1997',
    executables = executables
)
