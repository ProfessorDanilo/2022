import pandas as pd
import matplotlib.pyplot as plt

df=pd.read_csv("Dados dia 01-10-2020.csv", sep=";", encoding="cp1252")
df.head()
plt.plot(df["Hora"], df["Temperatura"])
plt.xlabel('Horário')
plt.ylabel('Temperatura em °C')
plt.suptitle('Temperatura de 01/10/2020', fontsize=16)
plt.show()
#Sanlvando o gráfico
plt.savefig('Temperatura01-10-2020.png')
