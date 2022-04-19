class Solution {
public:
    
    // return true if and only if this move obay the law of Sudoku
    bool obeyRule(int row, int col, char c, vector< vector < char > >& board){
        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == c)
                return false;
            if(board[row][i] == c)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c)
                return false;
        }
        return true;
    }
    
    bool dfs(vector<vector<char>>& board){
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char pos = '1'; pos <= '9'; pos++)
                    {
                        if(obeyRule(i,j,pos,board))
                        {
                            board[i][j] = pos;
                            if(dfs(board) == true)
                                return true;
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        dfs(board);
    }
};
