class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       mp[0]=-1;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
            sum+=nums[i];
            int t=sum%k;
            if(mp.count(t))
            {
                if(i-mp[t]>=2)
                {
                    return true;
                }
            }
                else
                {
                    mp[t]=i;
                }
            }
        return false;
    }
};