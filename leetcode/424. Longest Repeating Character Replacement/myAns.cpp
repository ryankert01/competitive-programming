class Solution {
public:
    int findMaxAlpha(unordered_map<char,int> alpha)//O(26)
    {
        int mx = 0;
        for(auto& i : alpha)
        {
            mx = max(mx,i.second);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        unordered_map<char,int>alpha;
        int a,l=0,i=0,j=0,mx=1,al,tpa;
        l++;
        alpha[s[i]]++;
        while(j < s.size())
        {
            a = l-findMaxAlpha(alpha);
            if(a > k)
            {
                alpha[s[i]]--;
                i++;l--;
            }
            else
            {
                mx = max(mx,l);
                j++;l++;
                alpha[s[j]]++;
                
            }
        }
        return mx;
    }
};
