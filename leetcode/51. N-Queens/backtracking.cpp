class Solution {
public:
    set<char>rw,cl,mi,pl;
    vector<vector<string>>ans;
    bool isValid( int row, int col){
        if(rw.find(row) != rw.end()) return false;
        if(cl.find(col) != cl.end()) return false;
        if(mi.find(row-col) != mi.end()) return false;
        if(pl.find(row+col)!=pl.end()) return false;
        return true;
    }

    void solve(vector<string> &bd, int i) {
        if(i == bd.size())
        {
            ans.push_back(bd);
            return;            
        }

        
        for(int j = 0; j < bd.size(); j++)
        {
            if(isValid(i,j))
            {
                rw.insert(i);
                cl.insert(j);
                mi.insert(i-j);
                pl.insert(i+j);
                bd[i][j] = 'Q';
                solve(bd,i+1);
                bd[i][j] = '.';
                rw.erase(i);
                cl.erase(j);
                mi.erase(i-j);
                pl.erase(i+j);
            }
        }
        
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> bd(n,string(n,'.'));
        solve(bd,0);
        return ans;
    }
};
