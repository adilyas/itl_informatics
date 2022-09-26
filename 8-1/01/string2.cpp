#include <iostream>
#include <string>

using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);
    cout << line1 << endl << line2 << endl;

    /*
    getline(cin, line1);
    getline(cin, line2);
    cout << line1 << endl << line2 << endl;
    */

    cout << line1.substr(0, 10) << endl;
    cout << line2.substr(3, 4) << endl; // line1[3:7]
}
