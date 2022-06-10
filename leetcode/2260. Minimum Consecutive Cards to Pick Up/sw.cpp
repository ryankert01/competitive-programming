class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
        int res = INT_MAX;
        int s = cards.size();
        for(int i = 0; i < cards.size();i++)
        {
            if(mp[cards[i]] > 0)
                res = min(res, i-mp[cards[i]]+2);
            mp[cards[i]] = i+1;
        }
        return res == INT_MAX ? -1 : res;
    }
};
