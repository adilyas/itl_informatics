#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a == 0) {
        cout << "zero\n";
    } else if (a > 0) { //elif
        cout << "positive\n";
    } else {
        cout << "negative\n";
    }

    if (a >= 10000000 || a <= -10000000) {
        cout << "sorry, too big\n";
    }

    if (a <= 10000000 && a >= -10000000) {
        cout << "ok\n";
    }

    cout << a << endl;

    if (a = 5) { // так нельзя
        cout << "a = 5 is ok\n";
    }
    if (a = 0) {
        cout << "a = 0 is not ok\n";
    }
    a = 0;
    if (a) {
        cout << "this has the same effect as the previous if\n";
    }

    cout << a << endl;
}
