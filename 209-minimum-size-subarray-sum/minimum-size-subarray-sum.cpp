class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int count=INT_MAX,sum=0;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                count=min(count,i-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(count==INT_MAX)
        {
            return 0;
        }
        else
        {
            return count;
        }
    }
};