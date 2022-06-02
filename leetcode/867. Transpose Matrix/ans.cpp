class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>ans;
        for(int n = 0; n < col; n++)
        {
            vector<int>tp;
            for(int i = 0; i < row; i++)
            {
                tp.push_back(matrix[i][n]);
            }        
            ans.push_back(tp);
        }
        return ans;
    }
};
