class Solution {
public:
    void dfs(vector<int>& nums, vector<vector<int>>& res, vector<int>subset, int i)
    {

        res.push_back(subset);

        
        for(int j = i; j < nums.size(); j++)
        {
            subset.push_back(nums[j]);
            dfs(nums,res,subset,j+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>subset;
        dfs(nums,res,subset,0);
        return res;
    }
};
