#include <iostream>
#include <string>

using namespace std;

// a = int(input())
int main() {
    // line1 = input()
    string line1;
    getline(cin, line1);

    long long a = stoll(line1);
    cout << a * 10 << endl;

    string number_string = to_string(a * 3);
    cout << number_string.substr(1, 2) << endl;
    cout << number_string[1] << number_string[2] << endl;
}
