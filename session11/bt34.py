loop_count = 0
q1 = {
    "How many legs an octopus has :" : "" ,
    '1' : "one leg",
    "2" : "two legs",
    '3' : "four legs",
    '4' : "eight legs"
}
q2 = {
    "How many legs an octopus has :" : "" ,
    '1' : "six legs",
    "2" : "two legs",
    '3' : "one legs",
    '4' : "eight legs"
}
q3 = {"How many legs an octopus has :" : "" ,
    '1' : "ten legs",
    "2" : "two legs",
    '3' : "three legs",
    '4' : "seven legs"
}
while True:
    quiz = [
        q1,
        q2,
        q3
    ]
    
    a = int(input('Your answer :'))
    if a == 4:
        print("Hura!!!!!!!!")
    else:
        print("Wrong")
    b = loop_count + 1
    loop_count += 1 
    print("Score :",b)
