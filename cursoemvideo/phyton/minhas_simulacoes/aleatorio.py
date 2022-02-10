##por professordanilo
##site professordanilo.com
##notas de aulas para a escolha Elite Campinas
##Todos os direitos reservados
##Uso livre, citar a fonte
##2018 - Danilo Lima
##Canal youtube
##\c\professordanilo
##
##aproveite
##

##
##Dados
##Astro	Raio equatorial(km)	Rnovo 	Raio na escala (mm)	Diâmetro[1] na escala (mm)	Diâmetro equatorial (km)
##Sol	        695.000	        109,0	400,0	                800	                            1.390.000
##Mercúrio	2.439,7	        0,4	1,4	                2,8	                            4.879,4
##Vênus         6.051,8	        0,9	3,5	                7,0	                            12.103,6
##Terra	        6.378,14	1,0	3,7	                7,3	                            12.756,28
##Marte	        3.397,2	        0,5	2,0	                3,9	                            6.794,4
##Júpiter	71.492	        11,2	41,1	                82,3	                            142.984
##Saturno	60.268	        9,4	34,7	                69,4	                            120.536
##Urano	        25.559	        4,0	14,7	                29,4	                            51.118
##Netuno	24.746	        3,9	14,2	                28,9	                            49.492
##Plutão	1.160	        0,2	0,7	                1,3	                            2.320
##
##
## Mercúrio: é o planeta mais próximo do Sol, e tem uma órbita invulgarmente excêntrica. É o planeta que orbita com maior velocidade, levando 88 dias para completar seu ciclo de translação, dando três voltas no seu próprio eixo no período de uma translação completa, ou seja, três voltas no seu próprio eixo em 88 dias terrestres.
##·         Vênus: Segundo planeta mais próximo ao Sol, tendo seu período de translação de 224,65 dias. Enquanto que as maiores partes dos planetas rodam sobre si próprias no mesmo sentido, Vénus é uma das exceções. Vénus gira sobre seu eixo a cada 243 dias terrestres, o que é um período invulgarmente longo.
##·         Terra: A rotação da Terra é no sentido anti-horário, levando 23 horas, 56 minutos, 4 segundos e nove centésimos, para completar seu ciclo, já seu período de translação é de 365,24 dias.
##·         Marte: Seu período de translação leva 687 dias, e seu período de rotação se aproxima bastante do período da Terra, levando 24h 40 minutos.
##·         Júpiter: Júpiter por sua vez é o maior planeta do sistema solar, tendo seu período de translação de 11,86 anos, e seu período de rotação de aproximadamente 10 horas.
##·         Saturno: O período da translação em torno do sol completa a cada 29 anos e 167 dias, visto que seu Período sinódico se realiza de 378 dias, de modo que, a cada ano a oposição ocorre com quase duas semanas de atraso em relação ao ano anterior. O período de rotação em seu eixo é curto, de 10 horas, 14 minutos, com algumas variações entre o equador e os polos.
##·         Urano: A translação de Urano ao redor do Sol dura aproximadamente 84 anos terrestre. O período rotacional no interior do planeta é de 17 horas e 14 minutos.
##·         Netuno: Rotação: 16 horas 11 minutos; Translação: 164 anos.
##·         Plutão: leva 248 anos para completar uma órbita. Suas características orbitais são bastante diferentes das dos planetas, que seguem uma órbita quase circular ao redor do Sol próximo a um plano horizontal chamado eclíptica. E seu período de Rotação é de 6.4 dias, terrestre.




#biblioteca para uso da função visual
from vpython import *
#biblioteca com funções matemáticas
from math import *

# Written by Joe Heafner, licensed under Creative Commons 4.0.
# All uses permitted, but you must not claim that you wrote it, and
# you must include this license information in any copies you make.
# For details see http://creativecommons.org/licenses/by/4.0

# Joe Heafner, April 2003

# Set up the scene
scene.background = color.white
scene.width = 1000
scene.height = 650
scene.range = 0.7e-11
scene.caption = "Accelerated charge; click to run or pause."

rmin = 0.3e-11 # Minimum radius
dr = 0.5e-11 # Increment in radius
dtheta = pi/6 # Increment in theta
dphi = pi/6 # Increment in phi

obsloc = [] # Empty array
phi = 0
# Start theta at something other than zero in order to avoid a singularity on the y-axis.
for theta in arange(dtheta, 2*pi+dtheta, dtheta):
    r = vector(rmin*sin(theta)*cos(phi), rmin*cos(theta), rmin*sin(theta)*sin(phi))
    vis = abs(r.x) > 1e-13
    rhat = norm(r)
    obsloc.append([r,
                   arrow(pos=vector(0,0,0), axis=r, shaftwidth=0.1e-12, color=color.green),  # radius vectors
                   arrow(pos=r, axis=rhat*1e-12, color=color.magenta, visible=vis)]) # propagation velocity
# Speed of light
c = 3e8
c2 = c**2
# Define a charged particle:
particle = sphere(pos=vector(0,0,0), radius=3e-13, color=color.red)
# Make the charge negative if you want an electron (also make it blue!)
particle.charge = 1.6e-19
if particle.charge < 0:
    particle.color=color.blue
    
#####################################
if particle.charge > 0:
## unsaturate particle to indicate old position
    particle.color = vector(1,.7,.7)  
else:
    particle.color = vector(.7,.7,1)
####################################
    
acc = vector(0,-2e17,0) # Define particle's acceleration

ascale = 0.04*2e-11/1e17 # Scale factor for pretty acc arrow

accarr = arrow(pos=particle.pos, axis=ascale*acc, shaftwidth=0.2e-12, color=color.yellow)
label(pos=accarr.pos + accarr.axis, xoffset=5, text="a",
               color=color.black, box=0, line=0, opacity=0)

oofpez = 9e9 # Coulomb constant, one-over-four-pi-epsilon-zero

escale = 0.1*2e-11/500 # Scale factor for pretty E arrows

bscale = 0.3*2e-11/1e-5 # Scale factor for pretty B arrows

# Create an array of E and B and a_perp arrows
Earr = [] # Empty array
Barr = [] # Empty array

for o in obsloc:
    # Position of field point relative to particle
    pt = o[0]
    vis = abs(pt.x) > 1e-13
    Earr.append(arrow(pos=pt, shaftwidth=0.2e-12, color=color.orange, visible=vis))
    Barr.append(arrow(pos=pt, shaftwidth=0.2e-12, color=color.cyan, visible=vis))

def reset():
    for i,o in enumerate(obsloc):
        # Position of field point relative to particle
        o[0] = rmin*norm(o[0])
        r = o[0] - particle.pos
        rhat = norm(r)
        o[1].pos = vector(0,0,0)
        o[1].axis = r
        o[2].pos = r
        o[2].axis = rhat*1e-12

        # The component of acceleration perpendicular to r is just vector r
        # minus the parallel component of acceleration. The parallel component
        # of acceleration has a magnitude equal to the dot product of acceleration
        # and rhat, and is directed parallel to rhat.
        aperp = acc - dot(acc,rhat)* rhat

        # Calculate radiative E field
        Erad = -oofpez * particle.charge * aperp / (c**2 * mag(r))
        Earr[i].axis = escale*Erad

        # Calculate radiative B field
        # The B field has magnitude E/c and is in the direction of rhat cross Erad.
        rhatcrossE = cross(rhat,Erad)
        Brad = (mag(Erad)/c) * norm(rhatcrossE)
        Barr[i].axis = bscale*Brad

reset()

def getclick(evt):
    global run, first
    run = not run
    if first:
        reset()
        first = False

scene.bind('click', getclick)

# Propagate the pulse
dt = 0.5e-22
t = 0
run = False
first = False
while True:
    rate(60)
    if not run: continue
    for i,o in enumerate(obsloc):
        # Get a new field point by increasing the magnitude of the current
        # vector from the field point to the origin. The components will
        # automatically be updated.
        pt = o[0]
        pt = (mag(pt) + c * dt)*norm(pt)
        o[0] = pt
        r = pt - particle.pos
        rhat = norm(r)
        o[1].axis = r
        o[2].pos = pt
        
        # Update perpendicular component of acceleration
        aperp = acc - dot(acc,rhat) * rhat

        # Update the E field and B field
        Erad = -oofpez * particle.charge * aperp / (c**2 * mag(r))
        rhatcrossE = cross(rhat,Erad)
        Brad = (mag(Erad)/c) * norm(rhatcrossE)
        Earr[i].pos = pt
        Earr[i].axis = escale*Erad
        Barr[i].pos = pt
        Barr[i].axis = bscale*Brad
    t = t + dt
    if t > 250*dt:
        t = 0
        first = True
        run = False

# This program visualizes the radiative E and B fields of a charged particle
# receiving a brief acceleration. Before the acceleration, the particle was
# stationary. After the acceleration, the particle moves with constant
# momentum although this motion is not shown. For obvious reasons, the
# outgoing pulse will have already propagated a finite distance from the
# particle when the simulation starts.
#
# Joe Heafner, April 2003
#
# Future modifications:
#  1) show Poynting vector
#  2) show the radial field inside and/or outside the spherical wavefront
#  3) allow the particle to oscillate

# slowed down; added mouse clicks Ruth Chabay 11/2004
# modified to show planar slice, include r vectors

# Create an array of field points (observer locations). This is a spherical
# distribution of points, but you could also use a rectangular distribution
# of points.

# Coordinate transformation for the grid of field points.
# Note that this is not the standard textbook transformaton!
# <x, y, z> = <r sin(theta) cos(phi), r cos(theta), r sin(theta) sin(phi)>
# phi wraps around the y-axis
# theta is relative to +y-axis
#
# This mapping of spherical coords to rectangular coords matches VPython's
# coordinate axis orientation, with y pointing "up". This is merely a matter
# of taste though. Most advanced textbooks use the convention that z points up.






##
##cone(pos=vector(2,0,0), axis=vector(0,1,0.2), color=color.blue, size=vector(2,1,1))
##s=sphere(pos=vector(2,-.6,0,), radius=.8)
##i=0
##for i in range(100):
##    rate(10)
##    s.pos=vector(i-50,-0.6,0)

##
##
##expandir_a_cena=box(size=vector(1,80,0), color=color.black)
###criando o sol
##R=30 #raio da órbira
##sol=sphere(pos=vector(0,0,0), radius=5, color=color.yellow)
##text(pos=vector(-2,-10,0), text="Sol", depth=0.5, height=2)
##planeta=sphere(pos=vector(R,0,0), radius=1, color=color.blue)
##terra=text(pos=vector(R+5,0,0), text="Terra", depth=0.5, height=2)
##
##i=0
##for i in range(1250):
##    rate(100)
##    planeta.pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000),0)
##    terra.pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000)+5,0)
##    if  i==0 or i==50 or i==100 or i==150 or i==200 or i==250 or i==300 or i==350 or i==400 or i==450 or i==500 or i==550 or i==600 or i==650 or i==700 or i==750 or i==800 or i==850 or i==900 or i==950:
##        sphere(pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000),0), color=color.green)
##
##i=0
##for i in range(550):
##    rate(160)
##    if i==100 or i==200 or i==300 or i==400 or i==500:
##        sphere(pos=vector(-i/10,30,0), color=color.green)
##
##    planeta.pos=vector(-i/10,30,0)
##    terra.pos=vector(-i/10,35,0)
##
##planeta.color=color.black
##terra.color=color.black
##
####
####
####
####scene.center=vector(250,500,0)
####scene.width= 1000
####scene.height= 500
####piso = box(pos=vector(200,1, 0), size=vector(2000,20,600),color=color.white)
####parede = box(pos =vector(1190, 395, 0), size=vector(20,800,600),color=color.white)
####
####esferaA=sphere(pos=vector(-600,60,0), radius=60, color=color.red)
####esferaB=sphere(pos=vector(0,60,0), radius=60, color=color.green)
####
####
####
#####colisão
####i=0
####for i in range(50):
####    esferaA.pos=vector(-600+10*i,60,0)
####    rate(250)
####i=0
####for i in range(550):
####    esferaA.pos=vector(-100+i,60,0)
####    if i<350:
####        esferaB.pos=vector(3*i,60,0)
####    if i>350:
####        esferaB.pos=vector(2200-3*i,60,0)
####    rate(250)
####
####seta_d = arrow(pos=vector(750,300,0), axis=vector(400,0,0), color= color.yellow)
####seta_e = arrow(pos=vector(900,300,0), axis=vector(-400,0,0), color= color.yellow)
####text(pos=vector(650,400,0), text="1,6 m", depth=50, height=100)
####
####
####
####
####
####
