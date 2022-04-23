class Solution {
public:
    bool possible(vector<int>& houses, vector<int>& heaters, int val){
        int j = 0;
        for(int i = 0; i < heaters.size(); ++i)
            while(j < houses.size() && abs(houses[j]-heaters[i]) <= val)
                j++;
        return j == houses.size();
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end()); 
        int high = (heaters.back() > houses.back()) ? heaters.back() : houses.back();
        int min = 0, mid;
        while(high-min >1)
        {
            mid = (high+min)/2;
            if(possible(houses,heaters,mid))
                high = mid;
            else 
                min = mid;
        }
        return possible(houses,heaters,min) ? min : high;
    }
};
