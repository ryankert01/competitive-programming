class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        if(target.size() > s.size())return 0;
        
        
        unordered_map<char,int>smp;
        for(char& i : s)
            smp[i]++;
        unordered_map<char,int>tmp;
        for(char& i : target)
            tmp[i]++;
        
        int ss = INT_MAX;
        for(auto& i : tmp)
            ss= min(ss,smp[i.first]/i.second);
        
        

        return ss;
    }
};
