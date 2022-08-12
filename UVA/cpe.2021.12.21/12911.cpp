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
}

#define ll long long

int N, T, s[41];

int main() {
	setIO();
	
    while (cin >> N >> T)
    {
        for (int i = 0; i < N; i++) cin >> s[i];
        int s1 = N / 2 == 0 ? N / 2 + 1 : N / 2;
        int s2 = N - s1;

        unordered_map<ll, ll> mp1;
        for (int i = 1; i < (1 << s1); i++) {
            ll sum = 0;
            for (int j = 0; j < s1; j++)
                if ((1 << j) & i)
                    sum += s[j];
            mp1[sum]++;
        }

        unordered_map<ll, ll> mp2;
        for (int i = 1; i < (1 << s2); i++) {
            ll sum = 0;
            for (int j = 0; j < s2; j++)
                if ((1 << j) & i)
                    sum += s[s1 + j];
            mp2[sum]++;
        }
      
        ll res = (ll) mp1[T] + mp2[T];
        for (auto i : mp1) {
            if(mp2.find(T-i.first) != mp2.end())
                res += (ll) mp2[T - i.first] * i.second;
        }
        cout << res << endl;
    }
}
