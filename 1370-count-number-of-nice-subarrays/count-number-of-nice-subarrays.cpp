class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int c=0,ans=0;
        vector<int> a(nums.size()+1);
        a[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            c+=nums[i]&1;
            if(c-k>=0)
            {
                ans+=a[c-k];
            }
            a[c]++;
        }
        return ans;
    }
};