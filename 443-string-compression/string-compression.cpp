class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int l=0;
        while(i<n){
           int co=0;
           char ch=chars[i];
           while(i<n&&ch==chars[i])
           {
            co++;
            i++;
           }
            if(co==1)
            {
                chars[l++]=ch;
            }
            else
            {
                chars[l++] = ch;
                string cnt = to_string(co);
                for(char c : cnt){
                chars[l++] = c;
            }
            }
        }
        return l;
    }
};