class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int l = 0, res = 0, mx = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            while(mp[nums[i]] > 0)
            {
                res -= nums[l];
                mp[nums[l++]]--;
            }
            mp[nums[i]]++;
            res += nums[i];
            mx = max(mx, res);
            
        }
        return mx;
    }
};
