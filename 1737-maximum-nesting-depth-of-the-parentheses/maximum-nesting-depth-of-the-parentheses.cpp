class Solution {
public:
    int maxDepth(string s) {
        int maxd=0,sum=0;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                sum++;
                maxd=max(sum,maxd);
            }
            else
            {
                if(s[i]==')'&&(!st.empty()))
                {
                    st.pop();
                    sum--;
                }
            }
        }
        return maxd;
    }
};