class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string sw) {
        // sort dictionary
        sort(products.begin(), products.end());
        
        // ans defined
        vector<vector<string>> res;
        
        // two pointers solution
        int s = products.size(), l = 0, r = s-1;
        for(int i = 0; i < sw.size(); i++)
        {
            // find the left possible word, and vice versa.
            while(l <= r && sw[i] != products[l][i])
                l++;
            while( l <= r &&sw[i] != products[r][i])
                r--;
            
            
            // in this roll
            vector<string> cur;
            for(int j = l; j <= r && j < l+3; j++)
                cur.push_back(products[j]);

            res.push_back(cur);
        }
        
        return res;
    }
};
