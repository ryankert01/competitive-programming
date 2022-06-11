class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int acc = accumulate(nums.begin(),nums.end(),0);
        int s = nums.size(), l = 0, r = 0,res = INT_MAX;
        
        while(l <= r)
        {
            if(acc >= x)
            {
                if(acc == x)
                    res = min(res, l+s-r);
                if(r < s)
                    acc -= nums[r++];
                else 
                    break;
                    
            }
            else
                acc += nums[l++];
        }
        
        
        return res == INT_MAX ? -1 : res;
    }
};
