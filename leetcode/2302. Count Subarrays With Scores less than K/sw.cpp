class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int s = nums.size(), l = 0;
        long long res = 0, cur = 0;
        for(int r = 0; r < s; r++)
        {
            cur += nums[r];
            while(cur*(r-l+1) >= k)
                cur -= nums[l++];
            res += r-l+1;
        }
        return res;
    }
};
