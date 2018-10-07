items = []
a = print("Name your things:",*items, sep=', ')
new_item = input('sở thích: ')
b = new_item.split(",")
print("your things:")
for item in b:
    print(item)
