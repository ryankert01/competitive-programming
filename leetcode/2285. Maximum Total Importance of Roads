class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>v(n,0);
        for(vector<int>& i : roads)
        {
            v[i[0]]++;   
            v[i[1]]++;     
        }
        sort(v.begin(),v.end());
        long long int m = 0; 
        for(long long int i = 0; i < n; i++)
            m+=(i+1)*v[i];
        return m;
    }
};
