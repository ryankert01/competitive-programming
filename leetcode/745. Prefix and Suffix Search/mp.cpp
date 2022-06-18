class WordFilter {
public:
    unordered_map<string,int>mp;
    WordFilter(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            int s = words[i].size();
            for(int j = 1; j <= s; j++){
                string s1(words[i].substr(0,j));
                for(int k = 1; k <= s; k++){
                    string s2(words[i].substr(s-k,k));
                    mp[s1+"/"+s2] = i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        return mp[prefix+"/" + suffix] - 1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
