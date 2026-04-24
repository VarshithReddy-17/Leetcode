class Solution {
public:
    int furthestDistanceFromOrigin(string moves) { 
        string ls=moves;
        string rs=moves;
        //int lc1=0,lc2=0;
        //int rc1=0,rc2=0;
        int ans1=0,ans2=0;
        for(int i=0;i<ls.size();i++)
        {
            if(ls[i]=='_')
            {
                ls[i]='L';
            }
        }
        for(int i=0;i<rs.size();i++)
        {
            if(rs[i]=='_')
            {
                rs[i]='R';
            }
        }
        for(int i=0;i<ls.size();i++)
        {
            if(ls[i]=='L')
            {
                ans1--;
            }
            else
            {
                ans1++;
            }
        }
        for(int i=0;i<rs.size();i++)
        {
            if(rs[i]=='R')
            {
                ans2++;
            }
            else
            {
                ans2--;
            }
        }
        ans1=abs(ans1);
        ans2=abs(ans2);
        int anss=max(ans1,ans2);
       return anss;
    }
};