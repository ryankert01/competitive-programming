class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int s = cost.size();
        int* dp = new int[s+1];
        
        dp[0] = 0;
        dp[1] = 0;
        
        for(int i = 2; i <= s; i++)
        {
            dp[i] = (dp[i-2] + cost[i-2] > dp[i-1] + cost[i-1])? dp[i-1] + cost[i-1] : dp[i-2] + cost[i-2];
        }
        return dp[s];
    }
};
