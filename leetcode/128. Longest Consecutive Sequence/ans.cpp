class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        int longestStreak = 0;
        
        
        map<int,int>mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]];
        }
        

        
        int streak = 1;
        auto it2 = mp.begin();
        for(auto it = mp.begin(); it!=mp.end();it++)
        {
            if(it->first-1 == it2->first)
            {
                 streak++;                
            }
            else
            {
                if(longestStreak < streak)
                    longestStreak = streak; 
                streak = 1;
                               
            }

            
            it2 = it;
        }
        if(longestStreak < streak)
            longestStreak = streak; 
        return longestStreak;
    }
};
