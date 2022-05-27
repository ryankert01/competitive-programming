class Solution {
public:
    int solve( vector<int> nums, int fb)
    {
        if(fb)
        {
            vector<int>::iterator it = ++nums.begin();
            for(; it != nums.end(); ++it)
                *(it-1) = *it;
        }
        nums.pop_back();
        int s = nums.size();
        nums[2] += nums[0];
        for(int i = 3; i < s; i++)
        {
            nums[i] += max(nums[i-2] , nums[i-3]);
        }
        return max(nums[s-1] , nums[s-2]);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        else if(nums.size() == 2) return max(nums[0], nums[1]);
        else if(nums.size() == 3) {
            int maxi = 0;
            for(int i : nums)
                if(i > maxi)maxi = i;
            return maxi;
        }
        return max(solve(nums,1), solve(nums,0));
    }
};
