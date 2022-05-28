class Solution {
public:
    bool digitCount(string num) {
        string nums(num.size(),'0');
        for(char& i : num)
            nums[i-'0']++;
        if(num == nums)return true;
        else return false;
    }
};
