a = int(input("số ngày trong tháng"))
if a in [1,3,5,7,8,10,12]:
    print("Có 31 ngày")
elif a == 2:
    print("Có 28 hoặc 29 ngày")
elif a< 0 or a > 12:
    print("Không có tháng đấy")
else:
    print("Có 30 ngày")