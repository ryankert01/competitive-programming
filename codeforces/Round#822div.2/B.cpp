#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

const int dir[5] = {0,1,0,-1,0};
int v[2000][2000];

void solve() {
    int s;
    cin >> s;
    cout << "1\n";
    for(int i = 1; i < s; i++) {
        cout << "1 ";
        for(int j = 1; j < i; j++) cout << "0 ";
        cout << "1\n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    fast;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
