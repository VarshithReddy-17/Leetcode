class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0,ans1=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(ans<g.size()&&ans1<s.size())
        {
            if(s[ans1]>=g[ans])
            {
                ans++;
            }
            ans1++;
        }
        return ans;
    }
};