class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
             priority_queue<vector<int>,
            vector<vector<int>>,
            greater<vector<int>>> pq;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            pq.push({nums[i][0],i,0});
            maxi=max(maxi,nums[i][0]);
        }
        int start=0,end=INT_MAX;
        while(!pq.empty()) {
            auto t=pq.top();
            pq.pop();
            int mini=t[0];
            int r=t[1];
            int c=t[2];
            if(maxi-mini<end-start) 
            {
                start=mini;
                end=maxi;
            }
            if(c+1<nums[r].size()) 
            {
                int next=nums[r][c + 1];
                pq.push({next, r, c + 1});
                maxi=max(maxi, next);
            }
            else 
            {
                break;
            }
        }
        return {start, end};
    }
};