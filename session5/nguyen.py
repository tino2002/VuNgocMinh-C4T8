import random
a = (random.randint(0, 100))
print(a)
if a < 30:
    print("rainy")
elif a < 60:
    print("Cloudy")
else:
    print("Sunny")