while True:
    name = input("Password ?")
    print(name)
    if name.isalpha():
        print("password must have number")
    else:
        print("Password")
        break
