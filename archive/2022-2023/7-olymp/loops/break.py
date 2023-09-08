n = int(input())

for i in range(n):
    if i == 6:
        continue
    if 3 < i < 7:
        print(i, "yes")
        if i > 4:
            if i == 13:
                break
    else:
        print(i, "no")