b = ["Alice","The White Rabbit","The Mouse","The Dodo","The Lory"]
c =  ["The Eaglet","The Duck",'Pat','Bill the Lizard','Puppy']


book = {
    "Name" : "Alice ' s Adventures in Wonderland",
    "Author" : "Lewis Carroll",
    "Year" : 1865,
    "Characters" : b
}
book["Language"] = "English"
book["Characters"] = ["The Eaglet","The Duck",'Pat','Bill the Lizard','Puppy']
a = "The Hatter"
book["Characters"].append(a)
book["Characters"].pop(0)
for k in book:
    if type(book[k]) == list:
        print(k,"- ",end='')
        print(*book[k],sep=', ')
    else:
        print(k,"-",book[k])
print('--------------')
for i in book["Characters"]:
    print(i)

