class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i: nums)
        {
            mp[i]++;
        }
        if (mp[maxi]!=2) 
        {
            return false;
        }
        for(int i=1;i<maxi;i++) 
        {
            if(mp[i]!=1) 
            {
                return false;
            }
        }
    return true;
    }
};