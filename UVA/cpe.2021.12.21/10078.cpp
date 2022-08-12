#include<iostream>
#include<cmath>
#include<math.h>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<cstring>
#include<climits>
using namespace std;

void setIO() {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
}


#define ll long long

void solve() {
	int t, tp;
	cin >> t;
	int m, res = INT_MIN;
	cin >> m;
	for (int i = 1; i < t; i++) {
		cin >> tp;
		res = max(res, m-tp);
		m = max(m, tp);
	}
	cout << res << endl;
}

int main() {
	setIO();
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		solve();
	}
}
