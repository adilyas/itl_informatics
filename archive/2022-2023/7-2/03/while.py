n = 10

while n > 0:
    n -= 1
    if n == 8:
        continue
    if n % 2 == 0:
        print(n)

    if n < 6:
        break

print("Loop has finished")
n += 2
