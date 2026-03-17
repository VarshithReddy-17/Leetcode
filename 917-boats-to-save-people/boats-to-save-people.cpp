class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats=0;
        sort(people.begin(),people.end());
        int l=0;
        int n=people.size()-1;
        while(l<=n)
        {
            if(people[l]+people[n]<=limit)
            {
                l++;
            }
            n--;
            boats++;
        }
        return boats;
    }
};