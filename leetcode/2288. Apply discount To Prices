class Solution {
public:
    bool isValid(string str)
    {
        for(char& i : str)
            if(i < 48 || i > 57)
                return false;
        return true;
    }
    string discountPrices(string sentence, int discount) {
        stringstream ss(sentence);
        vector<string>v;
        string s;
        while(ss >> s)
            v.push_back(s);
        
        string ans;
        bool flag = 0;
        long long int val;
        for(string i : v)
        {
            if(flag) ans += " ";
            if(i[0] == '$' && i.size() > 1 && isValid(i.substr(1)))
            {
                ans += "$";
                val = (stoll(i.substr(1))*(100-discount));
                ans += to_string(val/100);
                ans += ".";
                if(val%100 == 0)ans += "00";
                else if(val%100 <10)
                {
                    ans += "0";
                    ans += to_string(val%100);
                }
                else
                    ans += to_string(val%100);
            }
            else
                ans += i;
            
            flag = 1;
        }
        return ans;
    }

};
