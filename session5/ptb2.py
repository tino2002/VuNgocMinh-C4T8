print("ax^2+bx+c=0")
a = int(input("a"))
b = int(input("b"))
c = int(input("c"))
d = b ** 2 - 4 * a * c 
e = -b / 2 * a
f = (- b + d ** 0.5 ) / (2 * a)
g = (- b - d ** 0.5 ) / (2 * a)
if d < 0:
    print("pt vo nghiem")
if d == 0:
    print("pt co nghiem kep")
    print("x1=x2=", e)
if d > 0:
    print("pt co 2 nghiem phan biet")
    print("x1=", f)
    print("x2=", g)



