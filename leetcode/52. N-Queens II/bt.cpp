class Solution {
public:
    int totalNQueens(int n) {
        vector<bool> c(n,true);
        vector<bool> dm(2*n-1,true);
        vector<bool> dp(2*n-1,true);
        int res = 0;
        dfs(0,c,dm,dp,res);
        return res;
    }
    void dfs(int i,vector<bool>& c, vector<bool>& dm, vector<bool>& dp, int& res)
    {
        if(i >= c.size())
        {
            res++;
            return;
        }
        
        for(int j = 0; j < c.size(); j++)
        {
            int n = c.size();
            if(c[j] && dm[i-j+n-1] && dp[i+j])
            {
                c[j] = dm[i-j+n-1] = dp[i+j] = false;
                dfs(i+1,c,dm,dp,res);
                c[j] = dm[i-j+n-1] = dp[i+j] = true;
            }
        }
    }
};
