class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>tp(k,0);
        int res = INT_MAX;
        dfs(cookies, tp, 0, res);
        return res;
    }
private:
    void dfs(vector<int>& cookies, vector<int>& tp, int t, int& res)
    {
        int s = cookies.size();
        if(s == t)
        {
            res = min(res, *max_element(tp.begin(), tp.end()));
            return;
        }
        for(int i = 0; i < tp.size(); i++)
        {
            tp[i] += cookies[t];
            dfs(cookies, tp, t+1, res);
            tp[i] -= cookies[t];
        }
    }
};
