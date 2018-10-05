while True:
    name = input("Password ?")
    if name.isalpha():
        print("password must have number")
    else: 
        if name.count('') < 8:
                print(name)
                break
        else:
                print("password must have at least 8 characters")
                

