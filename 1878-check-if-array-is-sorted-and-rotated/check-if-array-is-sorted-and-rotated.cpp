class Solution {
public:
    bool check(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                ans++;
            }
        }
        if(ans>1)
        {
            flag=false;
        }
        return flag;
    }      
};