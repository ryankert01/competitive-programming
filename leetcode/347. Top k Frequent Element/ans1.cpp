class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //O(1)
        if(nums.size() == k)
            return nums;
        
        //O(2n)
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        //O(2n)
        vector<vector<int>>realm (nums.size()+1);
        for(auto it = mp.begin(); it!= mp.end(); it++)
        {
            realm[it->second].push_back(it->first);
        }
        
        // worse case O(3n)
        vector<int>ans;
        for(int i = realm.size()-1; i >= 0; i--)
        {
            for(int j = 0; j < realm[i].size(); j++)
            {
                ans.push_back(realm[i][j]);
                if(ans.size() == k)
                    return ans;
            }
            
        
        }
        
        return ans;
    }
    
};
