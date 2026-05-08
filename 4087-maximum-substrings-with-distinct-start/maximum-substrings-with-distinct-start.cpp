class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st;
        for(char i:s)
        {
            st.insert(i);
        }
        int ans=st.size();
        return ans;
    }
};