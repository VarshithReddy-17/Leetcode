class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while (low<=high) {
            int mid=(low+high)/2;

            int i=mid;
            int j=mid;
            while (i>=0) {
                if(i+1<nums.size()&&nums[i]==nums[i+1]) {
                    i--;
                }
                else if(i-1>=0&&nums[i]==nums[i-1]) {
                    i--;
                }
                else {
                    ans=nums[i];
                    break;
                }
            }
            while (j<nums.size()) {
                if (j-1>=0&&nums[j]==nums[j-1]) {
                    j++;
                }
                else if (j+1<nums.size()&&nums[j]==nums[j+1]) {
                    j++;
                }
                else {
                    ans=nums[j];
                    break;
                }
            }
            break;
        }
        return ans;
    }
};