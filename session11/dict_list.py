person = {
    "name" : "Duc",
    "age" : 22,
    'favs' : ["eat", 'sleep', 'code']
}
fs = person['favs']
print(fs) #append, pop ,index, remove, for
fs.append('pokemon ')
print(fs)
person['favs'].append("program")
person['favs'][2] = "gaming"  
print(fs)