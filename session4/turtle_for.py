from turtle import *
colormode(255)
width(5)
for i in range(5):
    color(255, i * 60, 0)
    for j in range(4):
        forward(100)    
        left(90)
    
    left(30)


mainloop()
