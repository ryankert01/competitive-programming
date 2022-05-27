class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        // nums[i][j] = nums[i*col + j]
        int m = row*col-1, n = 0, j;
        while(m >= n)
        {
            j = (m+n)/2;
            if(matrix[j/col][j%col] > target)
                m = j - 1;
            else if(matrix[j/col][j%col] < target)
                n = j + 1;
            else 
                return true;
        }
        return false;
    }
};
