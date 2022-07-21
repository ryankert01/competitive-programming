#include<iostream>
#include<cmath>
#include<math.h>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;


// return how much char needs to be removed to make string typed target, 
// otherwise return -1
int removeCharaters(string& typed, string& target) {
	if (typed.size() < target.size())
		return -1;
	int i = 0, j = 0, dif = typed.size() - target.size();
	while (i < typed.size() && j < target.size() && i - j <= dif) {
		if (typed[i] == target[j])
			j++;
		i++;
	}

	if (j == target.size())
		return i - j + (typed.size() - i);
	else
		return -1;
}


void solve() {
	string a, b;
	cin >> a >> b;
	int res = removeCharaters(b,a);
	if (res == -1)
		cout << "IMPOSSIBLE";
	else
		cout << res;
	
}

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}
}
