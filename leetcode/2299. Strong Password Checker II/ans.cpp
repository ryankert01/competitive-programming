class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8)return false;
        bool ctr1 = true, ctr2 = true, ctr3 = true, ctr4 = true, ctr5 = false;        
        string sc = "!@#$%^&*()-+";
        char lastchar = 0;
        for(char i : password)
        {
            if(i>=65 && i <= 90)
                ctr1 = false;
            else if(i >= 97 && i <= 122)
                ctr2 = false;
            else if(sc.find(i) != string::npos)
                ctr3 = false;
            else if(i >= 48 && i <= 57)
                ctr4 = false;
            if(i == lastchar)ctr5 = true;
            lastchar = i;
        }
        
        bool res = ctr1 || ctr2 || ctr3 || ctr4 || ctr5;
        return !res;
        
    }
};
