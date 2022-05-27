class Solution {
public:
    int search(vector<int>& nums, int target) {
        int m = nums.size()-1, n = 0, index;
        while(n <= m)
        {
            index = (n+m)/2;
            if(nums[index] > target)
                m = index-1;
            else if(nums[index] < target)
                n = index+1;
            else
                return index;
        }
        return -1;
    }
};
