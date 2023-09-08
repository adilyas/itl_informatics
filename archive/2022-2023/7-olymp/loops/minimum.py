n = int(input())

m = -10000000000
for i in range(n):
    a = int(input())
    if m > a:
        m = a
print(m)