#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int n, sum, maxi;
vector<vector<int>>matrix;
vector<vector<int>>dp;

int solve()
{
	maxi = INT_MIN;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <=n; j++)
		{
			sum = 0;
			for (int a = 0; a < n; a++)
			{
				sum += dp[j][a] - dp[i - 1][a];
				maxi = max(maxi, sum);
				if (sum < 0) sum = 0;

			}
		}
	}
	return maxi;
}

int main()
{
	while (cin >> n && n)
	{
		matrix.assign(n + 1, vector<int>(n, 0));
		dp.assign(n+1, vector<int>(n, 0));
		for (int i = 1; i <= n; i++)
			for (int j = 0; j < n; j++)
				cin >> matrix[i][j];
		for (int i = 1; i <= n; i++)
			for (int j = 0; j < n; j++)
				dp[i][j] = dp[i - 1][j] + matrix[i][j];
		cout << solve() << endl;
	}
}
