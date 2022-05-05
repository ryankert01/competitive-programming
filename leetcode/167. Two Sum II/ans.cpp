class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0, b = numbers.size()-1,c;
        while(1)
        {
            c = numbers[a] + numbers[b];
            if(c == target){
                return {a+1, b+1};
            }
            else if(c < target){
                a++;
            }
            else
                b--;
        }
        return {a+1, b+1};
    }
};
