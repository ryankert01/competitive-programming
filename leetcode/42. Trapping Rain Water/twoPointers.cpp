class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0)return 0;
        
        int ans = 0;
        int i = 0, j = height.size()-1;
        int mi = height[i], mj = height[j];
        while(i < j)
        {
            if(height[i] < height[j])
            {
                i++;
                
                mi = max(mi, height[i]);
                ans += min(mi,mj)-height[i] > 0 ? min(mi,mj)-height[i] : 0;
            }
            else
            {
                j--;
                mj = max(mj, height[j]);
                ans += min(mi,mj)-height[j] > 0 ? min(mi,mj)-height[j] : 0;
            }
            
        }
        return ans;
    }
};
