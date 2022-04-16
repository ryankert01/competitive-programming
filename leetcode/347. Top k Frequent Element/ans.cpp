class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }//O(n)
        
        vector<int> that;
        for(auto it = mp.begin(); it != mp.end(); it++)
            that.push_back(it->second);
        sort(that.begin(), that.end(), greater<int>());
        
        vector<int> ans;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second >= that[k-1])
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
    
};
