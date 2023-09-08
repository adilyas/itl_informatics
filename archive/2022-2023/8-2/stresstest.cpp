#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool solve(int n, string m) {
    vector<int> count(10, 0);

    for (auto c : m) {
        ++count[c - '0'];
    }

    int cnt[2] = {0, 0};

    for (int i = 0; i < 10; ++i) {
        ++cnt[count[i] % 2];
    }

    if (cnt[1] <= 1) {
        return true;
    } else {
        return false;
    }
}

bool isPalindrom(vector<int> number) {
    auto numberRev = number;
    reverse(begin(numberRev), end(numberRev));
    return number == numberRev;
}

bool naiveSolution(int n, string m) {
    vector<int> indexes(n);

    for (int i = 0; i < n; ++i) {
        indexes[i] = i;
    }

    vector<int> number;
    for (auto c : m) {
        number.push_back(c);
    }

    do {
        vector<int> curNum(n);

        for (int i = 0; i < n; ++i) {
            curNum[i] = number[indexes[i]];
        }

        if (isPalindrom(curNum)) {
            return true;
        }
    } while(next_permutation(begin(indexes), end(indexes)));

    return false;
}

void stress() {
    srand(42);

    while (true) {
        int n = rand() % 5 + 1;
        string m(n, 'a');

        for (int i = 0; i < n; ++i) {
            m[i] = '0' + (rand() % 10);
        }

        if (solve(n, m) != naiveSolution(n, m)) {
            cout << "BAD AT:\n" << n << "\n" << m << "\n";
        } else {
            cout << "TEST OK\n";
        }
    }
}

int main() {
    stress();

    int n;
    cin >> n;

    string m;
    cin >> m;

    if (solve(n, m)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    return 0;
}

