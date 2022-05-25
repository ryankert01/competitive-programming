class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int* ans = new int[amount+1]();
        
        for(int i = 1; i <= amount; i++)
        {
            ans[i] = INT_MAX;
            for(int c : coins)
            {
                if(c <= i && ans[i-c] != INT_MAX)
                {
                    ans[i]=min(ans[i],ans[i-c]+1);
                }
            }
        }
        if(ans[amount] == INT_MAX) return -1;
        return ans[amount];
    }
};
