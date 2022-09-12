#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    cout << "Hello, " << a << "!\n";
    cout << a[0] << a[a.size() - 1] << endl;
    char c = a[1];
    cout << c << endl;

    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);
    cout << line1 << endl << line2 << endl;
}
