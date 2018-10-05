import random
loop_count = 0
while True:
    c = (random.randint(0,100))
    d = (random.randint(0,100))
    g = c + d
    e = g + random.randint(-1,1)

    t = "True"
    f = "False"
    print(c,"+",d,"=",e)
    
    h = input("chon t hoac f")
    if e == g:
        if h == "t":
            print(t)
        else:
            print(f)
            break
    else:
        if h == "f":
            print(t)
        else:
            print(f)
            break
    z = loop_count + 1
    loop_count += 1
    print("điểm:",z)