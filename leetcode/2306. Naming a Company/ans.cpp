class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        int s = ideas.size();
        
        vector<unordered_set<string>>cnt(26);
        for(int i = 0; i < s; i++)
            cnt[ideas[i][0]-'a'].insert(ideas[i].substr(1));
        
        long long int res = 0, count;
        
        for(int i = 0; i < 26; i++)
        {
            for(int j = i+1; j < 26; j++)
            {
                count = 0;
                if(!cnt[i].empty() && !cnt[j].empty())
                {
                    for(const string a : cnt[i])
                    {
                        count += cnt[j].count(a);
                    }                    
                }
                res += 2 * (cnt[i].size() - count) * (cnt[j].size() - count);

            }
        }
        return res;
    }
};
