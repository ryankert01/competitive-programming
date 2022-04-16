class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um.find(nums[i]) != um.end()) return true;
            um[nums[i]]++;
        }
        return false;
    }
};
