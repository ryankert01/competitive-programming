class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> res(grid);
        int mn;
        

        
        for(int a = 1; a < row; a++)
        {
            for(int i = 0; i < col; i++)
            {
                mn = INT_MAX;
                for(int j = 0; j < col; j++)
                {
                    mn = min(mn, res[a-1][j] + moveCost[grid[a-1][j]][i]);
                }
                res[a][i] += mn;
                

            }
        }
        
        
        /*
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
                cout << res[i][j] << " ";     
            cout << endl;
        }
        cout << endl;*/

        
        
        
        
        mn = INT_MAX;        
        for(int a = 0; a < col; a++)
        {
            mn = min(mn, res[row-1][a]);
        }
        return mn;
    }
};
