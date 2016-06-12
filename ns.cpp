#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long dp[722][722];
long long int nCr(long long int n, long long int r)
{
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = (long long int)n;
    if(dp[n][r]) return dp[n][r]%m;
    return dp[n][r] = ((nCr(n-1,r)%m) + (nCr(n-1,r-1)%m))%m;
}
long long fact(long long n)
{
    long long ans=1;
    if(n==1)
        return 1;
    ans=((n%m)*(fact(n-1)%m))%m;
    return ans;
}
int main()
{
    long long t,d,u;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&d,&u);
        long long p = ((nCr(10,d)) * fact(d));
        if(p<u)
            printf("-1\n");
        else
        {
        long long q = ((nCr(p,u)%m) * (fact(u)%m))%m;
        printf("%lld\n",q);
        }
    }
}
