import math
a = int(input())
c = int(input())

if a < 0:
    print("a is negative")
    a = a + 2
    print("a equals to {}".format(a))
elif c != 0 and a % c == 0:
    print("a mod c = 0")
    a = a * 10
    print("a equals to {}".format(a))
elif (c == 0 or a == 0) and (a * c == 44 or a * c < 54):
    print("sad :(")
else:
    b = int(input("Give another number: "))
    print("b is equal to {}".format(b))

print("Hello world!")


