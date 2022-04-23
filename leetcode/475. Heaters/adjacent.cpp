class Solution {
public:

    int findRadius(vector<int>& houses, vector<int>& heaters) {

        int min1 = 0;
        sort(heaters.begin(), heaters.end()); 
        for(int i : houses)
        {
            int max1 = INT_MAX;
            auto it = lower_bound(heaters.begin(), heaters.end(), i);
            if(it != heaters.end())
                max1 = abs(*it - i);
            if(it != heaters.begin())
                max1 = min(max1, abs(*(it-1)-i));
            min1 = max(min1 , max1);
        }
        return min1;
    }
};
