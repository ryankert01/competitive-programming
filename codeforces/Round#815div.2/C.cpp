//
//  main.cpp
//  test
//
//  Created by Ryan Kert on 2022/9/12.
//

#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

const int dir[5] = {0,1,0,-1,0};
int v[2000][2000];

void solve() {
    int m, n, sum = 0;
    cin >> m >> n;
    string s;
    for(int i = 0; i < m; i++){
        cin >> s;
        for(int j = 0; j < n; j++) {
            v[i][j] = s[j]-'0';
            sum += v[i][j];
        }
    }
    int cc = 2;
    for(int i = 0; i < m-1; i++) {
        for(int j = 0; j < n-1; j++) {
            int cnt = v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1];
            if(cnt <= 2) cc = 0;
            else if(cnt == 3) cc = min(cc, 1);
        }
    }
    cout << sum - cc << endl;
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
