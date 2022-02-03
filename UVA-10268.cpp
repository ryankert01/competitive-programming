#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
    int x;
    vector<int>v;
    while (cin >> x) {
        v.clear();
        int buffer;
        while (cin >> buffer) {
            v.push_back(buffer);
            if (getchar() == '\n') break;
        }
        int sum = 0;
        int n = v.size() - 1;
        for (int i = 0; i < n; i++) {
            sum = sum * x + v[i] * (n - i);
        }

        cout << sum << endl;
    }
    return 0;
}