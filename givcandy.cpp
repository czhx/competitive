#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll x,ll y)
{
    if(!y)
        return x;
    else
        gcd(y,x%y);
}
ll func(ll p,ll q,ll r,ll s)
{
    ll e=abs(p-q);
    if(e==0)
        return 0;
    ll f=gcd(r,s);
    ll g=e%f;
    if(g<f-g)
        return g;
    else
        return f-g;
}
int main()
{
    int t;
    ll a,b,c,d,p,q,r,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        cout<<func(a,b,c,d)<<endl;
    }
}
