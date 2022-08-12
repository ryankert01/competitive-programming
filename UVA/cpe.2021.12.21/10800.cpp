#include<iostream>
#include<cmath>
#include<math.h>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<cstring>
#include<climits>
#include<map>
#include<unordered_map>
using namespace std;

void setIO() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
}

#define ll long long

int N, T, s[41];

void solve() {
	string s;
	cin >> s;
	int weight = s.size();
	int height;
	string temp(weight+1, ' ');
	vector<string> res(1, temp);
	int h = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'R') {
			res[h][i] = '/';
			h++;
			if (h >= res.size()) res.push_back(temp);
		}
		else if (s[i] == 'F') {
			h--;
			if (h < 0) res.insert(res.begin(), temp), h++;
			res[h][i] = 92; 
		}
		else if (s[i] == 'C') {
			res[h][i] = '_';
		}
	}
	for (int i = 0; i < res.size(); i++) {
		while (res[i].back() == ' ') {
			res[i].pop_back(); 
			if (res[i].empty()) {
				res.erase(res.begin() + i); i--;
				break;
			}
		}

	}

	

	for (int i = res.size() - 1; i >= 0; i--) {
		cout << "| " << res[i] << endl;
	}
	cout << "+--";
	for (int i = 0; i < weight; i++)
		cout << "-";
	cout << endl << endl;
}

int main() {
	setIO();
	
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cout << "Case #" << i << ":\n";
		solve();
	}
}
