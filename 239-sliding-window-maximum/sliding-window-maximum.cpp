class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int n=nums.size();
        vector<int> ans(n-k+1);
        int t=0;
        for(int i=0;i<k;i++)
        {
            while(dq.size()>0&&nums[i]>nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans[t++]=nums[dq.front()];
        for(int i=k;i<n;i++)
        {
            if(dq.size()>0&&dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while(dq.size()>0&&nums[i]>nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            ans[t++]=nums[dq.front()];
        }
        return ans;
    }
};