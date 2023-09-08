#include <iostream>

using namespace std;

int main() {
    // for i in range(4, 10, 2):
    //    print(i)
    for (int i = 4; i < 10; i += 2) {
        cout << i << endl;
    }

    int i;
    for (i = 4; i < 10; i += 2) {
        cout << i << endl;
    }

    /*
    for (в самом начале; перед входом; после каждого гаша) {
    }
    */

    int a = 10;
    for (;a > 0;) {
        cout << a << endl;
        a--;
    }
}
