#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int>& a, int l, int mid, int r) {
    int i = l, j = mid;
    vector<int> c;
    while (i < mid || j < r) {
        if (j == r || (i < mid && a[i] < a[j])) {
            c.push_back(a[i]);
            ++i;
        } else {
            c.push_back(a[j]);
            ++j;
        }
    }
    for (i = l; i < r; ++i) {
        a[i] = c[i - l];
    }
}

void Sort(vector<int>& a, int l, int r) {
    if (r - l <= 1) {
        return;
    }
    int mid = (l + r) / 2;
    Sort(a, l, mid);
    Sort(a, mid, r);
    Merge(a, l, mid, r);
}

int main() {
    vector<int> a = {4, 2, 5, 1, 7, 3, 3};

    Sort(a, 0, a.size());

    for (auto& x : a) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}

