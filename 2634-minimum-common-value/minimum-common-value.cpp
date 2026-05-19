class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans=-1;
        int l=0,r=0;
        while(l<nums1.size()&&r<nums2.size())
        {
            if(nums1[l]==nums2[r])
            {
                ans=nums1[l];
                break;
            }
            else if(nums1[l]<nums2[r])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};