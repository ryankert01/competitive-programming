class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int truckSize) {
        sort(bt.begin(), bt.end(), [](vector<int>& a, vector<int>&b){
            return a[1] > b[1];
        });
        
        int res = 0;
        for(int i = 0; i < bt.size(); i++){
            if(truckSize >= bt[i][0]){
                res += bt[i][0] * bt[i][1];
                truckSize -= bt[i][0];
            }
            else{
                res += truckSize * bt[i][1];
                return res;
            }
        }
        return res;
    }
};
