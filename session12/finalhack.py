print('1,')
print("a,")
for i in range(20):
    print("*",end=" ")
print()
print("b,")
stars = int(input("Enter a number: "))
for i in range(stars):
    print("*",end=" ")
print()
print("c,")
for i in range(9):
    if i % 2 == 0:
        print("x",end=" ")
    else:
        print("*",end=" ")
print()
print("d,")
b = int(input("Enter a number: "))
for i in range(b):
    if i % 2 == 0:
        print("x",end=" ")
    else:
        print("*",end=" ")
print()
print("f,")

# 0 1 2 3 4 5 6 7
# 1 x x x x x x x
# 2 x x x x x x x
# 3 x x x x x x x
for j in range(3):
    for i in range(0,7):
        print('x', end=' ')
    print()
print()
print("g")
c = int(input("Enter number of row : "))
d = int(input("Enter number of star in one row : "))
for j in range(c):
    for i in range(d):
        print('x', end=' ')
    print()
print()
print("h,")
for y in range(5):
    for x in range(6):
        if y == 3 and x == 1:
            print("x",end=" ")
        else:
            print('-', end=' ')
    print()
print()
print("g,")
w = int(input("Enter W: "))
h = int(input("Enter h: "))
x = int(input("Enter x: "))
y = int(input("Enter y: "))
for a in range(h):
    for b in range(w):
        if a == y and b == a:
            print("x",end=" ")
        else:
            print('-', end=' ')
    print()
print()
print("2,")
print("a,")


