class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int s = arr.size();
        unordered_map<int,int>nums;
        nums[arr[0]] = 0;
        
        unordered_map<int,int>mp;int mx = 0;
        for(int i = 1; i < s; i++)
        {
            nums[arr[i]] = i;
            for(int j = 0; j < i; j++)
            {
                if(arr[i]-arr[j]<arr[j] && nums.count(arr[i]-arr[j]))
                {
                    int idx= nums[arr[i]-arr[j]];
                    mp[i*s+j] = mp[j*s+idx] + 1;
                    mx = max(mp[i*s+j]+2,mx);
                }
            }
        }
        
        return mx >2 ?mx:0;
    }
};
