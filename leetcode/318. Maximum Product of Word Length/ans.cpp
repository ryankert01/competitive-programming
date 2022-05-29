class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>bitmask(words.size());
        int m = 0;
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
                bitmask[i] |= (1 << (words[i][j]-'a'));
            /*
            bitmask: 1 left shift (char) - 'a' times
            int : 32 bits, and we only have to handle 24 characters.
            ex. a = 0001
                b = 0010
            */
            for(int j = 0; j < i; j++)
                if(!(bitmask[i] & bitmask[j]))
                    m = max(m,int(words[i].size()*words[j].size()));
        }
        return m;

    }
};
