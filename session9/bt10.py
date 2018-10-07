import random
c = ["duck","dog","cat"]
l = len(c)
a = random.randint(0,len(c))
b = list(c[a])
e = c[a]
random.shuffle(b)
for item in b:
    print(item, end=" ")
print()
d = input("ket qua:")
if d == e:
    print("Dung") 
else:
    print("sai")