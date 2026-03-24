class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
       // int maxi=0;
        long long sum=0,maxi=0;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mp[nums[i]]++;
            if(i-l+1>k) {
                mp[nums[l]]--;
                if(mp[nums[l]]==0) 
                {
                    mp.erase(nums[l]);
                }
                sum-=nums[l];
                l++;
            }
            if(i-l+1==k&&mp.size()==k) {
                maxi=max(maxi,sum);
            }
        }
        return maxi;
        }
};