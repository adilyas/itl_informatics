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

    if (a >= 10000000) {
        cout << "sorry, too big\n";
    }

    cout << a << endl;

    if (a = 5) { // так нельзя
    }

    cout << a << endl;
}
