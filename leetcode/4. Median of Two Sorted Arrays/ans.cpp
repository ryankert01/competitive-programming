class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int medSize = (nums1.size()+nums2.size()) / 2;
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        if((nums1.size()+nums2.size())%2==0)
        {
            for(int i = 0; i < medSize; i++)
            {
                if(it1 == nums1.end())
                    ans = *it2++;
                else if(it2 == nums2.end())
                    ans = *it1++;
                else if(*it1 > *it2)
                    ans = *it2++;
                else
                    ans = *it1++;
                
            }
            if(it1 == nums1.end())
                ans += *it2++;
            else if(it2 == nums2.end())
                ans += *it1++;
            else if(*it1 > *it2)
                ans += *it2++;
            else
                ans += *it1++;
            ans /= 2;
        }
        else
        {
            medSize++;
            for(int i = 0; i < medSize; i++)
            {
                if(it1 == nums1.end())
                    ans = *it2++;
                else if(it2 == nums2.end())
                    ans = *it1++;
                else if(*it1 > *it2)
                    ans = *it2++;
                else
                    ans = *it1++;
                
            }
        }
        return ans;
    }
};
