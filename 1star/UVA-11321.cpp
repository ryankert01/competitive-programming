#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int m, n;

inline bool toSort(int a, int b) {
    if ((a % m) != (b % m)) {
        return (a % m) < (b % m);
    }
    else {
        if (a % 2) {//a is odd
            if (b % 2) {
                return a > b;
            }
            else {
                return true;
            }
        }
        else {//a is even
            if (b % 2) {
                return false;
            }
            else {
                return a < b;
            }
        }
    }
}

int main() {
    vector<int>v;
    int temp;
    while (cin >> n >> m) {
        cout << n << " " << m << endl;
        if (n + m == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end(), toSort);
        for (int i : v) {
            cout << i << endl;
        }
        v.clear();
    }
}