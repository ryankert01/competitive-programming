#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    int temp;
    while (cin >> temp, temp) {
        v.push_back(temp);
        while (cin >> temp, temp) {
            v.push_back(temp);
        }
        int max = 0;
        int n = 0;
        for (int i = 1; i < v.size(); i++) {
            n = abs(v[i] - v[0]);
            if (!max) max = abs(v[i] - v[0]);
            if (!max) continue; // if v[0] == v[2], max will equal to 0 permanently.
            while (n %= max) swap(n, max);
        }
        cout << max << endl;
        v.clear();
    }
    return 0;
}