class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        int pos;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;
        for(vector<int>& i : operations)
        {
            pos = mp[i[0]];
            nums[pos] = i[1];
            mp.erase(i[0]);
            mp[i[1]] = pos;
        }
        
        return nums;
    }
};
