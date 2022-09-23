#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

const int dir[5] = {0,1,0,-1,0};
//int v[2000][2000];

void solve() {
    int s, cnt;
    cin >> s >> cnt;
    vector<int> nums(s);
    for(int i = 0; i < s; i++) cin >> nums[i];
    vector<pair<ll,ll>> v1,v2; // pair ( gain , maximum cost }
    ll count = 0, maxM = 0;
    cnt--;
    for(int i = cnt+1; i < s; i++) {
        count += nums[i];
        maxM = min(maxM, count);
        if(i+1 >= s || (count > 0 && nums[i+1] < 0)) {
            v2.push_back({count, maxM});
            maxM = count = 0;
        }
    }
    count = 0;
    maxM = 0;
    for(int i = cnt-1; i >= 0; i--) {
        count += nums[i];
        maxM = min(count, maxM);
        if(i == 0 || (count > 0 && nums[i-1] < 0)) {
            v1.push_back({count, maxM});
            maxM = count = 0;
        }
    }
    /*
    cout << v1.size() << " " << v2.size() << endl;
    for(auto it : v1) cout << it.first << " " << it.second << endl;
    for(auto it : v2) cout << it.first << " " << it.second << endl;
     */
    ll me = nums[cnt];
    int i = 0, j = 0;
    if(i >= v1.size() || j >= v2.size()) {
        cout << "YES\n";
        return;
    }
    while(me + v1[i].second >= 0 || me + v2[j].second >= 0) {
        if(i >= v1.size() || j >= v2.size())
            break;
        if(me + v1[i].second >= 0) {
            me += v1[i].first;
            i++;
        }
        else if(me + v2[j].second >= 0) {
            me += v2[j].first;
            j++;
        }
        if(i >= v1.size() || j >= v2.size())
            break;
    }
    if(i >= v1.size() || j >= v2.size()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
