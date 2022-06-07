class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int s = arr.size();
        unordered_set<int> nums(arr.begin(),arr.end());
        int i, j, ct = 0,a,b,c,mx=0;
        for(i = 0; i < s; i++)
        {
            for(j = i+1; j < s; j++)
            {
                ct = 2;
                a = arr[i];
                b = arr[j];
                while(nums.find(a+b) != nums.end())
                {
                    ct++;
                    c=a;a=b;b+=c;
                }
                mx = max(ct,mx);  
            }
        }
        return mx >= 3 ? mx : 0;
    }
};
