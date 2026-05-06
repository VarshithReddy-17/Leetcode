class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(2);
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(!(mp.find(i)!=mp.end()))
            {
                freq[1]=i;
            }
            if(mp[i]==2)
            {
                freq[0]=i;
            }
        }
        return freq;
    }
};