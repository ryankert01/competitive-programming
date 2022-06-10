class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        ans[0] = 0;
        for(int i = 1; i <= n; i++)
            ans[i] = ans[i/2] + i%2;
        
        return ans;
    }
};
/*
explain: O(N)

dynamic programming

when i%2 == 0, i >> 1 == i / 2
when i%2 == 1, i >> 1 == i / 2 + 1

understand that, using dynamic programing, 
we can calaulate that from the front. 0 --> n


*/
