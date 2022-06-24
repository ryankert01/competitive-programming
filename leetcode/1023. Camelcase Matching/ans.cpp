class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>res(queries.size() , true);
        
        int ptr;
        for(int i = 0; i < queries.size(); i++)
        {
            ptr = 0;
            for(int j = 0; j < queries[i].size(); j++)
            {
                if(queries[i][j] == pattern[ptr])
                    ptr++;
                else if(queries[i][j] < 96)
                {
                    res[i] = false;
                    break;
                }
            }
            if(ptr < pattern.size())
                res[i] = false;
            
        }
        
        return res;
    }
};
