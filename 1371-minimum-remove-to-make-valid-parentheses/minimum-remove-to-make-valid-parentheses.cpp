class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        vector<char> ans(s.size());
        for(int i=0;i<s.size();i++)
        {
            ans[i]=s[i];
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else if(st.empty())
                {
                    ans[i]='*';
                }
            }
        }
        while(!st.empty())
        {
            int temp=st.top();
            ans[temp]='*';
            st.pop();
        }
        string res;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!='*')
            {
                res+=s[i];
            }
        }
        return res;
    }
};