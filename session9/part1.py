from turtle import *
color = ["blue","red","teal","green"]
print("our colors list:")
print(*color, sep=", ")
a = input("enter new color:")
color.append(a)
print(*color, sep=", ")
b = int(input("Enter position: "))
c = b - 1
print("Color at position",b,":",color[c])
l = len(color)

for i, d in enumerate(color):
    print(i + 1, d)
e = input("Item to delete:")
if e.isalpha():
    item_to_delete = e
    color.remove(item_to_delete)
    for i, d in enumerate(color):
        print(i + 1, d)
else:
    color.pop(int(e))
    for i, d in enumerate(color):
        print(i + 1, d)