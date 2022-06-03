// row-oriented approach, dynamic programming
// Runtime: 443 ms, faster than 88.61% of C++ online submissions for Range Sum Query 2D - Immutable.
// Memory Usage: 147.8 MB, less than 92.98% of C++ online submissions for Range Sum Query 2D - Immutable.
class NumMatrix {
public:
    vector<vector<int>>v;
    NumMatrix(vector<vector<int>>& matrix) :v(matrix){
        for(int i = 0; i < v.size(); i++)
            for(int j = 0; j < v[0].size();j++)
            {
                if(i && j)
                    v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
                else if(j)
                    v[i][j] += v[i][j-1];
                else if(i)
                    v[i][j] += v[i-1][j];
            }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        int ans = v[row2][col2];
        if(row1)
            ans -= v[row1-1][col2];
        if(col1)
            ans -= v[row2][col1-1];
        if(row1 && col1)
            ans += v[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
