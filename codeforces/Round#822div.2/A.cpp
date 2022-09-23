#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

const int dir[5] = {0,1,0,-1,0};
int v[2000][2000];

void solve() {
    int s;
    cin >> s;
    vector<int>v(s);
    for(int i = 0; i < s; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int res = INT_MAX;
    for(int i = 2; i < s; i++) {
        res = min(v[i] - v[i-2],res);
    }
    cout << res << "\n";
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
