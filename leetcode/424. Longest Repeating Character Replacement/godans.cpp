class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>alpha;
        int res = 0, maxf = 0;
        for(int i = 0; i < s.size(); i++)
        {
            maxf = max(maxf,++alpha[s[i]]);
            if(res - maxf < k)
                res++;
            else
                alpha[s[i-res]]--;
            
        }
        return res;
    }
};
