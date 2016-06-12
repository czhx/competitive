#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        ll a[10001],dp[10001];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        dp[0]=a[0];
        dp[1]=max(dp[0],a[1]);
        for(int k=2;k<n;k++)
            dp[k]=max(dp[k-1],dp[k-2]+a[k]);
        printf("Case %d: %lld\n",i,dp[n-1]);
    }
}
