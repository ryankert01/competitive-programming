class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //sort(potions.begin(), potions.end());
        vector<int>res(spells.size(),0);
        int ss = spells.size();
        int ps = potions.size();
        map<int,int>dp;int mx = INT_MIN;
        for(int i = 0; i < ps; i++)
            dp[potions[i]]++, mx = max(mx,potions[i]);
        int acc = 0;
        for(auto& i : dp)
            acc += i.second, i.second = acc-i.second;
        //for(auto& i : dp)
            //cout << i.first << " " << i.second << endl;
        long long mi;
        for(int i = 0; i < ss; i++)
        {
            mi = success%spells[i] > 0 ? success / spells[i] +1 :  success / spells[i];
            while(dp.find(mi) == dp.end() && ++mi <= mx);
            if(dp.find(mi)!=dp.end())
                res[i] = ps-dp[mi];
        }
        return res;
    }
};
