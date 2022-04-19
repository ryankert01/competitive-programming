class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        

        for (int c = 0; c < 9; c++)
        {
            
            for (int r = 0; r < 9; r++)
            {
                if(board[r][c] != '.')
                    if(++mp[board[r][c]] > 1)
                        return false;   
                if(board[c][r] != '.')
                    if(++mp1[board[c][r]] > 1)
                        return false;
           

            }
            mp.clear();
            mp1.clear();
        }
        for(int i = 0; i<9; i += 3){
            for(int j = 0; j < 9; j+=3){
                for(int a = 0; a < 3; a++){
                    for(int b = 0; b < 3; b++){
                        if(board[a+i][b+j] != '.'){
                            if(++mp[board[a+i][b+j]] > 1)
                            {
                                return false;                                
                            }
                        }
                    }
                }        
                mp.clear();
            }

        }
        
        
        return true;

    }
    

};
