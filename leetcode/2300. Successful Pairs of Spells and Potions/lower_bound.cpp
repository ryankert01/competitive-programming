class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>res(spells.size(),0);
        int ss = spells.size();
        int ps = potions.size();
        long long mi;
        for(int i = 0; i < ss; i++)
        {
            mi = (success + spells[i] - 1 ) / spells[i];
            int a =  lower_bound(potions.begin(), potions.end(), mi)-potions.begin();
            res[i] = ps-a;
        } // lower_bound is O(logN) using binary search
        return res;
    }
};
