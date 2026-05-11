class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int a=nums[0]-1;
        int b=nums[1]-1;
        int ans=a*b;
        return ans;
    }
};