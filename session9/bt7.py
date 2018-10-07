while True:
    items = ["Sport","LOL","BTS","Food","Death note","Netflix"]
    a = input("Bạn muốn chọn bước nào trong CRUD")
    if a == "c":
        new_item = input('bạn muốn thêm sở thích gì: ')
        items.append(new_item)
        print(items)
    elif a == "r":
        for i, item in enumerate(items):
            print(i + 1, item.upper())
    elif a == "u":
        b = int(input("bạn muốn đổi sở thích ở số bao nhiêu:"))
        c = b - 1
        items[c] = input("Bạn muốn thay đổi thành gì:")
        print(items)
    elif a == "d":
        i = int(input("vị trí bạn muốn xóa"))
        e = i - 1
        items.pop(e)
        print(items)
    else:
        print("không có chữ này")

