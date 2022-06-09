class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())return false;
        
        vector<int> aim(26,0);
        vector<int> count(26,0);
        int l = s1.size();
        for(int i = 0; i < l; i++)
            aim[s1[i]-'a']++;
        
        for(int i = 0; i < l; i++)
            count[s2[i]-'a']++;
        if(aim == count)
            return true;
        
        for(int i = l; i < s2.size(); i++)
        {
            count[s2[i]-'a']++;
            count[s2[i-l]-'a']--;
            if(aim == count)
                return true;
        }
        return false;
    }
};
