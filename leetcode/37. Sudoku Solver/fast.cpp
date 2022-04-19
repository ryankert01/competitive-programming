class Solution {
public:
    
    vector<vector<int>> rows, cols, cells;
    bool flag;
    
    void rearrange(vector<vector<char>>& board){
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] != '.')
                {
                    int t = board[i][j] - '0';
                    rows[i][t] = cols[j][t] = cells[i-i%3+j/3][t] = t;
                }
                else
                    board[i][j] = 0;
            }
        }
    }
    
    void dfs(int i, int j, vector<vector<char>>& board){
        if(flag)
            return;
        
        for(; i != 9; i++)
        {
            while(++j != 9)
            {
                if(board[i][j] == 0)
                {
                    for(int z = 1; z < 10; z++)
                    {
                        int id = i - i%3 +j/3;
                        if(!(rows[i][z] || cols[j][z] || cells[id][z]))
                        {
                            board[i][j] = '0' + z;
                            rows[i][z] = cols[j][z] = cells[id][z] = z;
                            dfs(i,j,board);
                            if(flag)
                                return;
                            board[i][j]= 0;
                            rows[i][z] = cols[j][z] = cells[id][z] = 0;
                        }
                    }
                    return;
                }
            }
            j = -1;
        }
        flag = true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        rows.resize(9, vector<int>(10,0));
        cols.resize(9, vector<int>(10,0));
        cells.resize(9, vector<int>(10,0));
        
        rearrange(board);
        
        flag = false;
        dfs(0,-1,board);
    }
};
