from pylab import xlabel, ylabel, show, plot, ylim
from numpy import linspace, sin, cos, tan

x=linspace(0,10,100)
y1=cos(x)
y2=sin(x)
y3=tan(x)

plot(x,y1,"r--")
plot(x,y2,"g.")
plot(x,y3,"b-")

ylim(-5.1,5.1)
xlabel("x axis")
ylabel("sin x, cos x or tan x")

show()
