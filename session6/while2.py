while True:
    txt = input("Enter year of birth:")
    print("txt")
    if txt.isdigit():
        print("A Number")
        break
    else:
        print("Not a Number")
print(2018 - int(txt))