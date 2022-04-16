class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        for(int i =  0; i < s.size(); i++){
            mp[s[i]]++;
        }
        for(auto it= t.begin(); it != t.end(); it++){
            mp[*it]--;
        }
        for(auto it=mp.begin(); it!=mp.end();it++){
            if (it->second)
                return false;
        }
        return true;
    }
};
