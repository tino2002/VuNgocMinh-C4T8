



person = [
    {
        "Name" : "Huy",
        "Role" : "Waiter",
        "Hours" : 12,
        "Salary" : 0.8 
    }, 
    {
        "Name" : "Tung",
        "Role" : "Cook",
        "Hours" : 24,
        "Salary" : 1.5,
    },
    {
        "Name" : "M.Duc",
        "Role" : "Manager",
        "Hours" : 20,
        "Salary": 2,
    }
]
a = person[1]
b = person[2]
p1 = {
    "Name" : "Don",
    "Role" : "Waiter",
    "Hours" : 12,
    "Salary" : 0.9,
}
p2 = {
    "Name" : "H.Duc",
    "Role" : "Waiter",
    "Hours" : 14,
    "Salary" : 0.7,
}
person.append(p1)
person.append(p2)
a = person[3]['Salary']
p3 = {
    'Name' : 'Huyen',
    'Role' : "Waitress",
    'Hours' : 14,
    "Salary" : 1
}
b = person[0] = p3
person.pop(4)
for p in person:
    print("Name : ",p['Name'])
    print("Role : " ,p['Role'])
    print("Hours : ",p['Hours'])
    print("Salary : ",p['Salary'])
    print("---------------")
sum = 0
for v in person:
    print(v["Name"], v["Role"], v["Hours"], v["Salary"])
    c = v["Hours"] * v["Salary"]
    sum += c
    print(v["Name"]," : ", c)
print("Tổng số tiền công ty phải trả : ",sum)