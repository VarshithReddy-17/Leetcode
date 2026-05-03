class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=i+1;j<nums.size();j++)
            {
                int temp=nums[i]%2;
                int temp1=nums[j]%2;
                if(temp!=temp1)
                {
                    c++;
                }
            }
            ans[i]=c;
        }
    return ans;
    } 
};