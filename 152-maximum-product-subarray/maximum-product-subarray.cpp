class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            int ans=1;
            for(int j=i;j<nums.size();j++)
            {
                ans*=nums[j];
                p=max(ans,p);
            }
        }
        return p;
    }
};