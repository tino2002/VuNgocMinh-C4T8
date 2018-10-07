import random
items = ["Sport","LOL","BTS","Food"]

i = 0
items[i] = 'Spiderman'
a = 3
items[a] = 'Dragonball'
b = int(input("Dien vi tri ban muon doi"))
c = input("noi dung moi")
items[b] = c
print(items)
items.remove('LOL') 
print(items)
d = int(input('Vi tri muon xoa'))
items.pop(d)
print(items)
e = input('thu ban muon xoa')
items.remove(e)
print(items)