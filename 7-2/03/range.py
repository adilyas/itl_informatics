n = 10
for i in range(n): # range(n) = range(0, n, 1) = 0, 1, 2, 3, ..., 9
    print(i)

a = 4
b = 12
for i in range(a, b): # range(a, b) = range(a, b, 1) = 4, 5, 6, 7, ..., 10, 11
    print(i)


a = 3
b = 14
d = 3
for i in range(a, b, d): # range(a, b, d) = 3, 6, 9, 12
    print(i * i)

a = 24
b = 3
c = a * b

print(f"{a}*{b}={c}") # 24*3=72
