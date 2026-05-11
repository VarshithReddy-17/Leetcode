class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>9)
            {
                string temp=to_string(nums[i]);
                for(int j=0;j<temp.size();j++)
                {
                    int t1=temp[j]-'0'; 
                    ans.push_back(t1);
                }
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};