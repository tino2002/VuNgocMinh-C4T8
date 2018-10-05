sides = int(input("How many sides would you like? "))
angle = 360 / sides

import turtle 
for count in range(sides):
  turtle.fd(50)
  turtle.lt(angle)
turtle.mainloop()