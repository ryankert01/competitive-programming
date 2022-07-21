#include<iostream>
#include<cmath>
#include<math.h>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;


int remainder(string& nums) {
	int sum = 0;
	for (char& i : nums) {
		sum += i - '0';
		sum %= 9;
	}
	if (sum) sum = 9 - sum;
	return sum;
}

void solve() {
	string nums;
	cin >> nums;
	char newChar = remainder(nums)+'0';
	bool flag = true;
	for (int i = 0; i < nums.size(); i++) {
		
		if (flag&&nums[i] > newChar) {
			if (i != 0 || newChar != '0') {
				cout << newChar;
				flag = false;
			}

		}
		cout << nums[i];
	}
	if (flag)
		cout << newChar;
	
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
