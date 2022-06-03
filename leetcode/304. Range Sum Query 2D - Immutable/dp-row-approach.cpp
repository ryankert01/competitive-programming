// row-oriented approach, dynamic programming
// Runtime: 856 ms, faster than 13.34% of C++ online submissions for Range Sum Query 2D - Immutable.
// Memory Usage: 147.9 MB, less than 79.01% of C++ online submissions for Range Sum Query 2D - Immutable.
class NumMatrix {
public:
    vector<vector<int>>v;
    NumMatrix(vector<vector<int>>& matrix) :v(matrix){

        for(int i = 0; i < v.size(); i++)
            for(int j = 1; j < v[0].size();j++)
                v[i][j] += v[i][j-1];
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = 0;
        for(int i = row1; i <= row2; i++)
            ans += (col1-1 < 0) ? v[i][col2] : v[i][col2] - v[i][col1-1]; 
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
