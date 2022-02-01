v=float(input('Type the velocity of space ship in function of de light velocity: '))
d=float(input('Type the distance from earth to another planet in light years: '))
gamma=1/(1-(1/v)**2)**0.5
time_earth=d/v
time_space_ship=time_earth/gamma

print('The travel time in earth frame is {:.3} years an in the space ship frame is {:.3} years or {:.3} days or {:.3} hours.'.format(time_earth, time_space_ship, time_space_ship*24, time_space_ship*24*60))
