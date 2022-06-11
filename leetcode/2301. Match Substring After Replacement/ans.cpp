class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& mappings) {
        unordered_map<char,unordered_set<char>>mp;
        for(vector<char>& i : mappings)
            mp[i[0]].insert(i[1]);
        int ss = s.size();
        int bs = sub.size();
        int j,b;bool flag = true;
        for(int i = 0; i <= ss-bs; i++)
        {
            j = i;
            for(int b = 0; b < bs; b++, j++)
            {
                if(s[j] != sub[b])
                {
                    if(mp[sub[b]].find(s[j]) != mp[sub[b]].end() )continue;
                    flag = false;break;
                }
            }
            if(flag)return true;
            flag = true;
        }
        return false;
    }
};
