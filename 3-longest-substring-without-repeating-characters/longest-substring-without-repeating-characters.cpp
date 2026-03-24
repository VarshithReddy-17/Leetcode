class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>a;
        int l=0,maxi=0;
        for(int i=0;i<s.size();i++)
        {
            while(a.find(s[i])!=a.end())
            {
                a.erase(s[l]);
                l++;
            }
        a.insert(s[i]);
        maxi=max(maxi,i-l+1);
        }
        return maxi;
    }

};