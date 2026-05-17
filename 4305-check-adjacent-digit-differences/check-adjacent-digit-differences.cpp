class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        bool ans=true;
        for(int i=0;i<s.size()-1;i++)
        {
            int a=abs(s[i]-s[i+1]);
            if(a<=2)
            {
                ans=true;
            }
            else
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};