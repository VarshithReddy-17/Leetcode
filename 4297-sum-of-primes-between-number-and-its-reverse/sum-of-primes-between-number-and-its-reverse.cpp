class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev=0;
        int temp=n;
        while(temp>0)
        {
            int rem=temp%10;
            rev=(rev*10)+rem;
            temp=temp/10;
        }
        int mini=min(n,rev);
        int maxi=max(n,rev);
        int sum=0;
        for(int i=mini;i<=maxi;i++)
        {
           if(i<=1)
           {
            continue;
           }
            bool check=true; 
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    check=false;
                    break;
                }
            }
                if(check)
                {
                    sum+=i;
                }
            }
        return sum;
}
};