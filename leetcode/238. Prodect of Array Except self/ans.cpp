class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productAll = 1;
        int zeros = 0;
        int zerosPlace;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
                productAll *= nums[i];  
            else
            {
                zeros++;       
                zerosPlace = i;
            }

        }
        
        
        if(zeros > 1) 
        {
            vector<int>ans(nums.size(),0);
            return ans;            
        }
        else if(zeros == 1)
        {
            vector<int>ans(nums.size(),0);
            ans[zerosPlace] = productAll;
            return ans;
        }
        else
        {
            vector<int>ans(nums.size());
            for(int i = 0; i < nums.size(); i++)
                ans[i] = productAll / nums[i];
            return ans;
        }
    }
};
