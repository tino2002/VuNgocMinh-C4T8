while True:
    quiz = input("""How many legs does a spider have?
    a = None
    b = 4 legs
    c = 8 legs
    d = 12 legs""")
    print(quiz)
    if quiz == "a":
        print("correct")
        break
    else:
        print("Not correct")