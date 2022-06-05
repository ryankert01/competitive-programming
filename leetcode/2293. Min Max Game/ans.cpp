class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int>num(nums);
        while(num.size() > 1)
        {
            for(int i = 0; i < num.size()/2; i++)
            {
                if(i%2==1)
                    num[i] = max(num[2 * i], num[2 * i + 1]);
                else
                    num[i] = min(num[2 * i], num[2 * i + 1]);
            }
            num.resize(num.size()/2);
        }
        return num[0];
    }
};
