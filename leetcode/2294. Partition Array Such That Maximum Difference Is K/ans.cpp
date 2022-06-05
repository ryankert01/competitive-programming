class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if(nums.size() <1)return 0;
        int ans = 0;
        sort(nums.begin(), nums.end());
        int f = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] - f > k)
            {
                ans++;
                f = nums[i];
            }
        }
        ans++;
        return ans;
    }
};
