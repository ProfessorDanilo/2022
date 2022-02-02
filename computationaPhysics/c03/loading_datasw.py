from numpy import loadtxt
from pylab import plot, show, ylim, xlabel, ylabel

data = loadtxt("values.txt", float)

x = data[:, 0]
y = data[:, 1]

plot(x,y, "g-")#cor (rgbk etc) e tipo (o, -, --)
ylim(0.1, 2.5)
xlabel("Eixo x")
ylabel("Eixo y = sin x")
show()
