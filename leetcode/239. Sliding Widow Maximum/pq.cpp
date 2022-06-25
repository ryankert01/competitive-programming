class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res(nums.size()-k+1,0);
        int r = 0;
        
        priority_queue<pair<int,int>>pq;
        
        for(int i = 0; i < k; i++)
            pq.push({nums[i], i});
        
        res[r++] = pq.top().first;
        
        for(int i = k; i < nums.size(); i++)
        {
            pq.push({nums[i], i});
            
            while(pq.top().second < i-k+1)
                pq.pop();
            
            res[r++] = pq.top().first;
        }
        
        
        return res;
    }
};
