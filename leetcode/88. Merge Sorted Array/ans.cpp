class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nn(nums1);
        nums1.resize(m+n);
        int i = 0, j = 0,a = 0;
        while(m > i && n > j)
        {
            if(nn[i] > nums2[j])
                nums1[a++] = nums2[j++];
            else
                nums1[a++] = nn[i++];
        }
        for(; i < m; i++)
            nums1[a++] = nn[i];
        for(; j < n; j++)
            nums1[a++] = nums2[j];
        
    }
};

/* a line
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int t = m+n-1;m--;n--;
        while(n>=0)
            nums1[t--] = m >= 0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
        
    }
};
*/
