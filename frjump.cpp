#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mo 1000000007
ll a[1005],p[1005];
double f[1005];
ll func(ll c,ll d)
{
    ll ans=1;
    while(d>0)
    {
        if(d&1)
        ans=(ans*c)%mo;
        c=(c*c)%mo;
        d/=2;
    }
    return ans;
}
int main()
{
    ll n,q,x,y,z;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&q);
    ll m=sqrt(n);
    f[0]=0;
    p[1]=1;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=1;j<=n;j+=i)
        {
            p[i]=((p[i]%mo)*(a[j]%mo))%mo;
            f[i]=f[i]+log10(a[j]);
        }
    }
    while(q--)
    {
        scanf("%lld",&x);
        if(x==2)
        {
            scanf("%lld",&y);
            //cout<<pow(10,f[y])<<"\n"<<p[y]<<"\n";
        }
        else if(x==1)
        {
            scanf("%lld %lld",&y,&z);
            for(ll i=0;i<=m;i++)
            {
                if(i-1)%
            }
        }
    }
}
