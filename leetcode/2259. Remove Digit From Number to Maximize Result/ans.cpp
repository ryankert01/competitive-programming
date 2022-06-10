class Solution {
public:
    string removeDigit(string number, char digit) {
        string max_str,tp;
        int a,b,diff=0;
        for(int i = 0; i < number.size(); i++)
        {
            if(number[i] == digit)
            {
                tp = number;
                tp.erase(i,1);
                a = i;b=i+1;
                if(b < number.size())
                {
                    diff = number[a]-number[b];
                    
                }
                if(diff < 0)break;
            }
        }
        return tp;
    }
};
