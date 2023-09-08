#include <bits/stdc++.h>

using namespace std;

const auto SEED = chrono::system_clock::now().time_since_epoch().count();
mt19937 gen(SEED); 

inline double GenProbability() {
    uniform_real_distribution<double> genDbl(0, 1);
    return genDbl(gen);
}

inline int GenInt(int n) {
    uniform_int_distribution<int> genInd(0, n - 1);
    return genInd(gen); 
}

int CalcE(const vector<int>& ord) {
    vector<int> mainDiag(2 * ord.size(), 0), antiDiag(2 * ord.size(), 0);
    int n = ord.size(), cnt = 0;
    for (int i = 0; i < n; ++i) {
        int mainDiagNum = n - i + ord[i];
        cnt += mainDiag[mainDiagNum]++;
        int antiDiagNum = i + ord[i];
        cnt += antiDiag[antiDiagNum]++;
    }
    return cnt; // how many queens threaten each other
}

vector<int> SimulAnnealing(int n, int iterCnt = 100000, double temp = 1.5, const double reduce = 0.993) {
    vector<int> ord(n);
    for (int i = 0; i < n; ++i) {
        ord[i] = i;
    }

    shuffle(ord.begin(), ord.end(), gen);
    int e = CalcE(ord);

    vector<int> bestOrd = ord;
    int bestE = e;

    while (iterCnt-- > 0 || n * temp > 1) {
        vector<int> newOrd = ord;
        int k = max(1, int(n * temp));
        for (int i = 0; i < k; ++i) {
            int id1 = GenInt(n), id2 = GenInt(n);
            swap(newOrd[id1], newOrd[id2]);
        }
        
        int newE = CalcE(newOrd);
        if (newE < e) {
            ord = newOrd;
            e = newE;
            if (newE < bestE) {
                bestOrd = newOrd;
                bestE = newE;
            }
        } else {
            double p = exp(-(newE - e) / temp);
            if (GenProbability() <= p) {
                ord = newOrd;
                e = newE;
            }
        }

        temp *= reduce;
    }

    return bestOrd;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> ans = SimulAnnealing(n);

    // cout << CalcE(ans) << '\n';
    for (int i = 0; i < n; ++i) {
        cout << ans[i] + 1 << ' ';
    }
    cout << '\n';

    return 0;
}

