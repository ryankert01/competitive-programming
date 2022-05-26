class Solution {
public:
    int rob(vector<int>& nums) {
        
        int s = nums.size();
        if(s==1)return nums[0];
        if(s==2)return max(nums[0],nums[1]);
        int* ans = new int[s+1]();
        
        for(int i = 0; i < s; i++)
            ans[i+1] = nums[i];
        
        for(int i = 3; i <= s; i++)
            ans[i] += max(ans[i-2],ans[i-3]);
        
        return max(ans[s],ans[s-1]);
    }
};
