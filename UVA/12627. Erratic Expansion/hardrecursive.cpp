#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
/*
若r小於等於2 ^ (k - 1)，則f(k, r) = 2 * f(k - 1, r)
，否則f(k, r) = 2 * 3 ^ (k - 1) + 2 * f(k - 1, r - 2 ^ (k - 1))

*/
# define ll long long

ll dp[31] = {};

ll f(int k, int a) {
	if (k == 0) {
		if (a == 1)
			return 1;
		return 0;
	}
	if (a == (1 << k))
		return dp[k];
	k--;
	if (a <= (1 << k))
		return 2 * f(k, a);
	else
		return 2 * dp[k] + f(k, a - (1 << k));
}

void solve() {
	int k, a, b;
	cin >> k >> a >> b;
	
	ll ans = f(k, b) - f(k, a - 1);
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	dp[0] = 1;
	for (int i = 1; i < 31; i++) {
		dp[i] = dp[i - 1] * 3;
	}

	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ": ";
		solve();
	}
}
