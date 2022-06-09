class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> aim(26,0);
        vector<int> count(26,0);
        for(int i = 0; i < s1.size(); i++)
            aim[s1[i]-'a']++;
        int l = 0, j = 0;
        for(int i = 0; i < s2.size(); i++)
        {
            count[s2[i]-'a']++;
            l++;
            if(l >= s1.size())
            {
                if(aim == count)
                    return true;
                count[s2[j]-'a']--;
                j++;l--;
            }
        }
        return false;
    }
};
