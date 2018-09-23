a = int(input("điền tháng bạn muốn biết mùa :"))
print(a)
if a < 2:
    print("mùa đông")
elif a < 5:
    print("mùa xuân")
elif a < 8:
    print("mùa hè")
elif a < 10:
    print("mùa thu")
elif a < 13:
    print("Mùa đông")
else:
    print("Lỗi")