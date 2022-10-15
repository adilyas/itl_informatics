# C++ vs Python

- [Вывод текста в консоль](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#вывод-текста-в-консоль)
- [Переменные и арифметические операции с ними. 1](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#переменные-и-арифметические-операции-с-ними-1)
- [Переменные и арифметические операции с ними. 2](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#переменные-и-арифметические-операции-с-ними-2)
- [Вывод дробных чисел](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#вывод-дробных-чисел)
- [Ввод из консоли](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#ввод-из-консоли)
- [Условия](https://github.com/adilyas/itl_informatics/blob/main/8-2/c%2B%2B_vs_python.md#условия)
- [Циклы. Вывести числа до 10](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#циклы-вывести-числа-до-10)
- [Создать массив](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#создать-массив)
- [Считать двумерный массив и вывести его в обратном порядке](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#считать-двумерный-массив-и-вывести-его-в-обратном-порядке)
- [Считать строку целиком и перевернуть ее](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#считать-строку-целиком-и-перевернуть-ее)
- [Считать N слов и отсортировать их](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#считать-n-слов-и-отсортировать-их)
- [Сортировка пар](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#сортировка-пар)
- [Считывание из файла](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#считывание-из-файла)
- [Функции. 1](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#функции-1)
- [Функции. 2](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#функции-2)
- [Рекурсия. 1](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#рекурсия-1)
- [Рекурсия. 2](https://github.com/adilyas/itl_informatics/blob/main/8-2/c++_vs_python.md#рекурсия-2)

### Вывод текста в консоль

#### C++:
```
#include <iostream>

using namespace std;

int main() {
    cout << "Hello world" << endl;
}
```
Вывод:
```Hello world```

#### Python:
```
print("Hello world")
```
Вывод:
```Hello world```

---
### Переменные и арифметические операции с ними. 1
#### C++:
```
#include <iostream>

using namespace std;

int main() {
    int a, b;
    a = 7;
    int c = 5;
    int d = a + c;
    b = a - d;
    b++;
    cout << "a = " << a << "| b = " << b << "| c = " << c << "| d = " << d << endl;
}
```
Вывод:
```a = 7 | b = -4 | c = 5 | d = 12```

#### Python:
```
a = 7
c = 5
d = a + c
b = a - d
b += 1
print("a = {} | b = {} | c = {} | d = {}\n".format(a, b, c, d))
```
Вывод:
```a = 7 | b = -4 | c = 5 | d = 12```

---
### Переменные и арифметические операции с ними. 2
#### C++:
```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi = 3.14, r = 2, s, a;
    s = pi * r * r;
    cout << "s = " << s << endl;
    cout << "sqrt(2) = " << sqrt(2) << endl;
}
```
Вывод:
```
s = 12.56
sqrt(2) = 1.41421
```

#### Python:
```
import math
pi = 3.14
r = 2
s = pi * r * r 
print("s = {}".format(s))
print("sqrt(2) = {}".format(math.sqrt(2)))
```
Вывод:
```
s = 12.56
sqrt(2) = 1.4142135623730951
```
---
### Вывод дробных чисел
#### C++:
```
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(9); 
    cout << "1/3 = " << 1.0/3.0 << endl;
}
```
Вывод:
```
1/3 = 0.333333333
```

#### Python:
```
print("1/3 = %.9f" % (1/3))
```
Вывод:
```
1/3 = 0.333333333
```
---

### Ввод из консоли
#### C++:
```
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "sum = " << a + b << endl;
    cout << "diff = " << a - b << endl;
    cout << "mul = " << a * b << endl;
    cout << "div = " << a / b << endl;
    cout << "mod = " << a % b << endl;
}
```
Ввод:
```
15 6
```
Вывод:
```
sum = 21
diff = 9
mul = 90
div = 2
mod = 3
```

#### Python:
```
a, b = map(int, input().split(' '))
print("sum = %d" % (a + b))
print("diff = %d" % (a - b))
print("mul = %d" % (a * b))
print("div = %d" % (a // b))
print("mod = %d" % (a % b))
```
Ввод:
```
15 6
```
Вывод:
```
sum = 21
diff = 9
mul = 90
div = 2
mod = 3
```
---
### Условия
#### C++:
```
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a < b) {
        cout << "b is greater than a" << endl;
    } else if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }
    
    if (a % 2 == 0 && b % 2 == 0) {
        cout << "a and b are even" << endl;
    } else if (a % 2 != 0 || b % 2 != 0) {
        cout << "a or b is odd" << endl;
    }
}
```
Ввод:
```
15 6
```
Вывод:
```
a is greater than b
a or b is odd
```

#### Python:
```
a, b = map(int, input().split(' '))

if a < b:
    print("b is greater than a")
elif a > b:
    print("a is greater than b")
else:
    print("a is equal to b")

if a % 2 == 0 and b % 2 == 0:
    print("a and b are even")
elif a % 2 != 0 or b % 2 != 0:
    print("a or b is odd")
```
Ввод:
```
15 6
```
Вывод:
```
a is greater than b
a or b is odd
```
---


### Циклы. Вывести числа до 10
#### C++:
```
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
}
```
Вывод:
```
0 1 2 3 4 5 6 7 8 9
```

#### Python:
```
for i in range(10):
    print(i, end=" ")
```
Вывод:
```
0 1 2 3 4 5 6 7 8 9
```
---


### Создать массив
#### C++:
```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n, -5);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}
```
Ввод:
```
3
```
Вывод:
```
-5 -5 -5
```

#### Python:
```
n = int(input())
a = [-5] * n
for x in a:
    print(x, end=" ")
```
Ввод:
```
3
```
Вывод:
```
-5 -5 -5
```
---


### Считать двумерный массив и вывести его в обратном порядке
#### C++:
```
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n));
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cin >> a[i][j];
        }
    }
    for (int i = a.size() - 1; i >= 0; i--) {
        for (int j = a[i].size() - 1; j >= 0; j--) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
```
Ввод:
```
3
1 2 3
4 5 6
7 8 9
```
Вывод:
```
9 8 7
6 5 4
3 2 1
```

#### Python:
```
n = int(input())
a = []
for i in range(n):
    b = list(map(int, input().split(" ")))
    a.append(b)
for i in range(n):
    for j in range(n):
        print(a[n - 1 - i][n - 1 - j], end=" ")
    print("")
```
Ввод:
```
3
1 2 3
4 5 6
7 8 9
```
Вывод:
```
9 8 7
6 5 4
3 2 1
```

В питоне тоже можно перебирать в цикле значения в обратном порядке следующим образом:
```
for i in range(10, 3, -1):
    print(i, end=" ")
```
Вывод:
```
10 9 8 7 6 5 4
```
---

### Считать строку целиком и перевернуть ее
#### C++:
```
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << s << endl;
}
```
Ввод:
```
privet mir!
```
Вывод:
```
!rim tevirp
```

#### Python:
```
s = input()
s = s[::-1]
print(s)

```
Ввод:
```
privet mir!
```
Вывод:
```
!rim tevirp
```
---


### Считать N слов и отсортировать их
#### C++:
```
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
```
Ввод:
```
5
asdf
saf df -- 124d
```
Вывод:
```
--
124d
asdf
df
saf
```

#### Python:
```
n = int(input())
arr = []
while len(arr) < n:
    b = input().split(" ")
    arr.extend(b)
arr = arr[:n]
arr.sort()
for s in arr:
    print(s)
```
Ввод:
```
5
asdf
saf df -- 124d
```
Вывод:
```
--
124d
asdf
df
saf
```
Инструкция cin для string считывает все до пробельных символов (перенос строки также является пробельным символом).

---

### Сортировка пар
#### C++:
```
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    for (auto& item : arr) {
        cout << item.first << " " << item.second << endl;
    }
}
```
Ввод:
```
4
1 4 
-1 -1
0 5
0 2 
```
Вывод:
```
-1 -1
0 2
0 5
1 4
```

#### Python:
```
n = int(input())
arr = []
for i in range(n):
    a, b = map(int, input().split(' '))
    arr.append([a, b])
arr.sort()
for x in arr:
    print("{} {}".format(x[0], x[1]))
```
Ввод:
```
4
1 4
-1 -1
0 5
0 2
```
Вывод:
```
-1 -1
0 2
0 5
1 4
```
---


### Считывание из файла
#### C++:
```
#include <fstream>
#include <string>

using namespace std;

ifstream fin("input.txt")
ofstream fout("output.txt")

int main() {
    string name;
    fin >> name;
    fout << "Hello, " << name << "!" << endl;
}
```
input.txt:
```
Lyceum
```
output.txt:
```
Hello, Lyceum!
```

#### Python:
```
fin = open("input.txt", "r")
fout = open("output.txt", "w")

name = fin.readline()
print("Hello, {}!".format(name))
```
input.txt:
```
Lyceum
```
output.txt:
```
Hello, Lyceum!
```
---

### Функции. 1
#### C++:
```
#include <iostream>

using namespace std;

int aplusb(int a, int b) {
    return a + b;
}

int main() {
    cout << aplusb(5, 7) << endl;
}
```
Вывод:
```
12
```

#### Python:
```
def aplusb(a, b):
    return a + b
    
print(aplusb(5, 7))
```
Вывод:
```
12
```
---

### Функции. 2
Сумма n-х чисел в массиве.
#### C++:
```
#include <iostream>

using namespace std;

double sumNth(vector<double>& a, int n) {
    double sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        if ((i + 1) % n == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    vector<double> arr = {1.5, -0.5, 0, 0, 2, 1.25};
    cout << sumNth(arr, 2) << endl;
}
```
Вывод:
```
0.75
```

#### Python:
```
def sumNth(a, n):
    sum = 0
    for i in range(len(a)):
        if (i + 1) % n == 0:
            sum += a[i]
    return sum
    
arr = [1.5, -0.5, 0, 0, 2, 1.25]
print(sumNth(arr, 2))
```
Вывод:
```
0.75
```
---

### Рекурсия. 1
#### C++:
```
#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(6) << endl;
}
```
Вывод:
```
720
```

#### Python:
```
def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n - 1)
    
print(factorial(6))
```
Вывод:
```
720
```
---

### Рекурсия. 2
N-е число Фибоначчи.
#### C++:
```
#include <iostream>
#include <vector>

using namespace std;

vector<int> f;

int fib(int n) {
    if (f[n] != -1) {
        return f[n];
    }
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}

int main() {
    f.resize(1000, -1);
    f[0] = 0;
    f[1] = 1;
    cout << fib(20) << endl;
}
```
Вывод:
```
6765
```

#### Python:
```
def fib(n):
    if f[n] != -1:
        return f[n]
    f[n] = fib(n - 1) + fib(n - 2)
    return f[n]
   
f = [-1] * 1000
f[0] = 0
f[1] = 1
print(fib(20))
```
Вывод:
```
6765
```
---
