class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        //time complexity: O((n^2)/2)
        for(int i = 0; i < nums.size(); i++)
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    vector<int>ans;
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        vector<int>nul;
        return nul;
        */
        
        
        
        //time complexity: O(n)
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                return {mp[nums[i]], i};
            }
            else
            {
                mp.insert({target-nums[i],i});
            }
        }
        return {-1,-1};
    }
};
