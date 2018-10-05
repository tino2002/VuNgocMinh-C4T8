a = input("username")
b = input("password")
c = input("type your password 1 more time")


if b.isalpha():
    print("password must have number")
else:    
    if b.count("") <8:
        print("Password must have at least 8 characters")
    else:    
        if b != c:
            print("Your passwords are not match")
        else: 
            d = input("type your email")
            if d.count("@") == 0:
                print("email must have @")
            elif d.count(".") == 0:
                print("you forgot to use (.) ")
            else:
                print("welcome, new user")   
        