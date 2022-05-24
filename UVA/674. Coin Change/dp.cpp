#include<iostream>
using namespace std;

int coin[5] = { 50, 25, 10, 5, 1 };
int result[7490] = {};

void solve()
{
	result[0] = 1;
	for (int i = 0; i <= 4; i++)
		for (int j = coin[i]; j < 7490; j++)
			result[j] += result[j - coin[i]];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();
	int money;
	while (cin >> money)
		cout << result[money] << endl;
}
