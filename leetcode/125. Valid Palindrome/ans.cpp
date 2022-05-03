class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        char change = 'a' - 'A';
        for(char it : s)
        {
            if(it >= 'a' && it <= 'z')
                p.push_back(it);
            else if(it >= 'A' && it <= 'Z')
                p.push_back(it+change);
            else if(it >= '0' && it <= '9')
                p.push_back(it);
        }
        string::iterator it1 = p.begin();
        string::reverse_iterator it2 = p.rbegin();
        for(; it1 != p.end(); it1++, it2++)
        {
            if(*it1 != *it2)
                return false;
        }
        return true;
    }
};
