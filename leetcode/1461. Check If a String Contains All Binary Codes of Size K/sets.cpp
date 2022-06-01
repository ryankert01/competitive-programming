class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k;
        unordered_set<string>mp;
        for(int i = k; i <= s.size();i++)
        {
            string subs = s.substr(i-k,k); // substr(int pos, int length)
            if(mp.find(subs) == mp.end())
            {
                mp.insert(subs);
                need--;
            }
            if(need == 0)return true;
        }
        return false;
    }
};
