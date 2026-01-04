class Solution {
public:
bool isPrime(int x)
{
    if(x<2)  return false;
    for(int i=2;i*i<=x;i++)
    {if(x%i==0) return false;} return true;
}
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int n : nums)
        {
            int r=round(cbrt(n));
            if(r*r*r==n && isPrime(r)){
                sum+=(1+r+r*r+n);
                continue;
            }
            for(int i=2; i*i<=n;i++)
            {

                if(n%i==0)
                { int j=n/i;
                if(i!=j && isPrime(i) && isPrime(j))
                {
                    sum+=(1+i+j+n);
                }
                break;
                }
            }
        }
return sum;
    }
};