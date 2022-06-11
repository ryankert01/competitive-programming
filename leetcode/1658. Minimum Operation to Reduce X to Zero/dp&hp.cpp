class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        
        int s = nums.size();
        
        if(s == 1)return nums[0] == x ? 1 : -1;
        unordered_map<int,int>lacc; // dp
        
        int acc = 0;
        for(int i = 0; i < s && acc <= x; i++)
        {
            lacc[acc] = i;
            acc += nums[i];
        }
        
        acc = 0;
        int mn = INT_MAX;
        for(int i = s-1; i >= 0 && acc <= x; i--)
        {
            auto it = lacc.find(x-acc);
            if(it != lacc.end() && i+1 >= it->second)
            {
                mn = min(mn, s-i-1+it->second);
            }
            acc += nums[i];
        }
        
        
        return mn == INT_MAX ? -1 : mn;
    }
};
