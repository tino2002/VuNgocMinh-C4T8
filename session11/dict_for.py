person =  {
    'name' : 'Duc',
    'age' : 22,
    'location' : "Hanoi"
}
for k in person:
    print(k, person[k])
for v in person.values():
    print(v)
for k,v in person.item():
    print(k, v)