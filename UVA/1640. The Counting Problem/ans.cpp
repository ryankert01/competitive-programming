#include<vector>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

vector<int> convertNums(int n)
{
    vector<int>nums;
    while(n)
    {
        nums.push_back(n%10);
        n /= 10;
    }
    reverse(nums.begin(), nums.end());

    return nums;
}

void solve(const int n, vector<int>& ans)
{
    vector<int>nums = convertNums(n);
    int digits = nums.size();
    int power = pow(10, digits-1);

    for(int i = 0; i < digits; i++)
    {
        for(int j = 0; j < nums[i]; j++)
            ans[j] += power;
        
        if(i + 1 != digits)
            ans[nums[i]] += n % power;
        ans[nums[i]]++;

        for(int j = 0; j < 10; j++)
            ans[j] += power/10 *nums[i] * (digits-i-1);


        ans[0] -= power;
        
        power /= 10;

    }

}

int main(){
    int a, b;
    vector<int> result_a(10,0), result_b(10,0);

    while(cin >> a >> b && a && b)
    {
        result_a.assign(10,0);
        result_b.assign(10,0);

        if(a > b) swap(a,b);

        solve(a-1, result_a);
        solve(b, result_b);
      
        // ans = solve(b) - solve(a-1) 

        for(int i = 0; i< 9; i++)
            cout << result_b[i] - result_a[i] << " ";
        cout << result_b[9] - result_a[9] << endl;
    }
}
