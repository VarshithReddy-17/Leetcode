class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> a(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            while(j>=0)
            {
                a.push_back(nums[j]);
                j--;
            }
        }
        return a;
    }
};