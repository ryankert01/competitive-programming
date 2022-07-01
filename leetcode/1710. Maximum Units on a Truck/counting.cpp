class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int truckSize) {
        int cnt[1001] = {};
        for(auto& i : bt)
            cnt[i[1]] += i[0];
        
        int res = 0;
        for(int i = 1000; i > 0; i--)
        {
            if(cnt[i] > 0){
                if(truckSize >= cnt[i]){
                    res += i * cnt[i];
                    truckSize -= cnt[i];
                }
                else{
                    res += truckSize * i;
                    return res;
                }                
            }

        }
        return res;
    }
};
