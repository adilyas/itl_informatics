a = int(input())
b = int(input())
d = int(input())

for i in range(a, b, d):
    print(i)

# a, a + d, a + 2*d, a + 3*d, ..., a+k*d < b