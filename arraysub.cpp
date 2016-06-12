#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000005];
ll lr[1000005],rl[1000005],m[1000005];
int main()
{
    ll n,k;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&k);
    lr[1]=a[1];
    for(ll i=2;i<=n;i++)
    {
        if(i%k==0)
            lr[i]=a[i];
        else
            lr[i]=max(lr[i-1],a[i]);
    }
    for(ll i=n;i>=1;i--)
    {
        if(i==n)
            rl[i]=a[n];
        else if(i%k==0)
            rl[i]=a[i];
        else
            rl[i]=max(rl[i+1],a[i]);
    }
    ll x=n-k+1;
    for(ll i=1;i<=x;i++)
    {
        m[i]=max(rl[i],lr[i+k-1]);
        cout<<m[i]<<" ";
    }
}
