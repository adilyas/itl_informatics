#include <iostream>
#include <vector>

using namespace std;

vector<char> a;

void bruteforce(int i) {
    if (i == a.size()) {
        for (auto& c : a) {
            cout << c;
        }
        cout << endl;
        return;
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        a[i] = c;
        bruteforce(i + 1);
    }
}

int main() {
    a.resize(4);
    bruteforce(0);
}

