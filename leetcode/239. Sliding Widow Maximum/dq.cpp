class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res(nums.size()-k+1,0);
        int j = 0, l = 0, r = 0;
        deque<int>dq;
        
        while(r < nums.size())
        {
            while(!dq.empty() && nums[dq.back()] < nums[r])
                dq.pop_back();
            dq.push_back(r);
            
            if(l > dq.front())
                dq.pop_front();
            
            if(r+1 >= k)
            {
                res[j++] = nums[dq.front()];         
                l++;
            }
            r++;
        }
        
        return res;
    }
};
