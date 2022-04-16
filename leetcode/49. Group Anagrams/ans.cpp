class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>> arr;
        for(string& a:strs)
        {
            string t = a;
            sort(t.begin(), t.end());
            mp[t].push_back(a);
        }
        
        for(auto& i:mp)
        {
            arr.push_back(i.second);
        }
        return arr;
    }
};
