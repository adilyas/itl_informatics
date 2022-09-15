import math
a = float(input())

print("{:.4f}".format(math.sqrt(a // 2 + a % 2)))

if a == 0:
    print("a equals to zero")
    a = a + 2
    print("a equals to {}".format(a))
elif a == 1:
    print("a equals to one")
    a = a * 10
    print("a equals to {}".format(a))
else:
    b = int(input("Give another number: "))
    print("b is equal to {}".format(b))

print("Hello world!")


