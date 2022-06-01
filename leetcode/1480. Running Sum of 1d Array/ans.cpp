class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tp = 0;
        for(int i = 0; i < nums.size(); i++)
            tp = nums[i] += tp;
        return nums;
    }
};
