#include<iostream>
#include<cstring> // strlen()
using namespace std;


int main() {
	char a[1002];
	while (cin >> a, !(strlen(a) == 1 && !a[1]) ){
		int aLen = strlen(a);
		int max = 0;
		for (int i = 0; i < aLen; i++) {
			if ((i + 1) % 2)max += a[i] - '0';
			else max -= a[i] - '0';
		}
		max = abs(max);
		string ans = (max % 11) ? " is not a multiple of 11." : " is a multiple of 11.";
		cout << a << ans << endl;
	}
}