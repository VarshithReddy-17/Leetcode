class Solution {
public:
    int maxVowels(string s, int k) {
        int c = 0, ans = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c++;

            if(i >= k)
            {
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
                    c--;
            }

            ans = max(ans,c);
        }

        return ans;
    }
};