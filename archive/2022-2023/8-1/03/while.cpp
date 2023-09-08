#include <iostream>

using namespace std;

int main() {
    int a = 10;
    while (a > 0) {
        if (a == 8) {
            a--;
            continue;
        }
        cout << a << endl;
        a--;

        if (a < 4) {
            break;
        }
    }
}
