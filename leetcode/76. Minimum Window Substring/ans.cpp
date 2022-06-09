class Solution {
public:
    bool isValid(unordered_map<char,int>& aim, unordered_map<char,int>& res)
    {
        for(auto i : aim)//O(n * logn)
        {
            if(res[i.first] < i.second)
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.size() < t.size())return "";
        
        unordered_map<char,int> aim;
        unordered_map<char,int> res;
        
        for(int i = 0; i < t.size(); i++)
            aim[t[i]]++;
        int j = 0,i=0;
        string r;int flag = 0;
        for(i = 0; i < s.size(); i++)
        {
            while(isValid(aim,res))
            {
                if(r.size() > i-j || r.size() <= 0)
                    r = s.substr(j,i-j);
                res[s[j]]--;
                j++;
            }
            
            res[s[i]]++;
        }
        while(isValid(aim,res))
        {
            if(r.size() > i-j || r.size() <= 0)
                r = s.substr(j,i-j);
            res[s[j]]--;
            j++;
        }
        
        return r;
    }
};
