#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cout << a.size() << " "; // len(a)
    cout << a.empty() << '\n'; // a.size() == 0
    a[1] = 2;
    a[0] = 23432;
    a[a.size() - 1] = 5435;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << a[a.size() - 2] << "\n";
    a.front() = 54;
    // a[0] == a.front()
    cout << a.front() << " " << a.back() << "\n";

    for (int i = 0; i < n; ++i) {
        a.push_back(i); // a.append(i)
    }
    // now a.size() is 2*n

    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < n / 2; ++i) {
        a.pop_back(); // a = a[:-1]
    }

    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";

    // a[2:6]
    vector<int> cut(4);
    for (int i = 2; i < 6; ++i) {
        cut[i - 2] = a[i];
    }

    for (int i = 0; i < cut.size(); ++i) {
        cout << cut[i] << " ";
    }
    cout << "\n";

    cout << a.capacity() << " " << a.size() << "\n";
    cout << a[a.size() + 2] << "\n";
}



// a = [1, 2, 3]
// a.append(4)