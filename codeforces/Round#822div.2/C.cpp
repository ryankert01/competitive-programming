#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

const int dir[5] = {0,1,0,-1,0};
//int v[2000][2000];

void solve() {
    int s;
    cin >> s;
    string bs;
    cin >> bs;
    ll res = 0;
    int c, j;
    for(int i = 0; i < s; i++) {
        if(bs[i] == '0') {
            res += i + 1;
        }
        if(bs[i] == '0'|| bs[i] == '2') {
            j = c = i*2+1-i;
            while(i+j < s && (bs[i+j] == '0' || bs[i+j] == '2')) {
                if(bs[i+j] == '0') {
                    bs[i+j] = '2';
                    res += i+1;
                }
                j += c;
                //cout << "j: " << j << endl;
            }
        }
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
