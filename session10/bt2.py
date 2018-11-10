person = {
    "name" : "Justin Bieber",
    "age" : 24,
    "Job" : "Singer",
    

}
person["height"] = "1,75m"
a = input("more about JB")
b = input("information")
person[a] = b
print(person)
person["status"] = "single"

d = input("what do you want to update")
c = input("information")
person[d] = c
print(person)
del person[d]
print(person)
e = input("what do you want to delete")
del person[e]
print(person)
