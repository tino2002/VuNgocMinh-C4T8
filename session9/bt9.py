import random
a = input("enter a word:")
b = list(a)
l = len(a)
random.shuffle(b)
for item in b:
    print(item)