class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& e) {
        vector<set<int>>v;
        set<int>exist;
        unordered_map<int, int>mp;
        int a,b;
        for(int i = 0; i < e.size(); i++)
        {
            exist.insert(e[i][0]);
            exist.insert(e[i][1]);
            a = mp[e[i][0]];
            b = mp[e[i][1]];
            if(a > 0 && b > 0)
            {
                if(a != b)
                {
                    for(int j : v[b-1])
                        mp[j] = a;
                    v[a-1].insert(v[b-1].begin(), v[b-1].end());
                    v[b-1].clear();
                }
            }
            else if(a > 0)
            {
                v[a-1].insert(e[i][1]);
                mp[e[i][1]] = a;
            }
            else if(b > 0)
            {
                v[b-1].insert(e[i][0]);
                mp[e[i][0]] = b;
            }
            else
            {
                v.push_back(set<int>({e[i][0],e[i][1]}));   
                mp[e[i][0]] = v.size();
                mp[e[i][1]] = v.size();
            }


        }
        for(int i = 0; i < n; i++)
        {
            if(exist.find(i) == exist.end())
                v.push_back(set<int>({i}));
        }


        
        
        vector<long long int> tp;
        for(auto i : v)
            tp.push_back(i.size());
        
        vector<long long int>tp2(tp);
        for(int i = tp2.size()-2; i >= 0; i--)
            tp2[i] += tp2[i+1];
        
        long long int res = 0;
        for(int i = 0; i < tp.size() - 1; i++)
            res += tp[i] * tp2[i+1];
        
        
        return res;

    }
};
