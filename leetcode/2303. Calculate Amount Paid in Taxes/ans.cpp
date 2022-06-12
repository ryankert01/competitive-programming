class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double remainder = income, res = 0,l=0,r;
        bool flag = true;
        for(int i = 0; i < brackets.size() && flag; i++)
        {
            if(brackets[i][0] < income)
            {
                r = brackets[i][0];
            }
            else
            {
                r = income;
                flag = false;
            }
            res += (r-l)* brackets[i][1]/100;
            l = brackets[i][0];
        }
        return res;
    }
};
