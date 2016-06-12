#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
ll fin(ll x,ll n)
{
    ll ans=1;
    while(n>0)
    {
        if(n%2==1)
            ans=(ans*x)%m;
        x=(x*x)%m;
        n/=2;
    }
    return (ans%m);
}
ll fact[100006],a[100005];
int main()
{
    int t;
    ll n,k;
    fact[0]=1;
    for(ll i=1;i<=100002;i++)
        fact[i]=((fact[i-1]%m)*i)%m;
    scanf("%d",&t);
    while(t--)
    {
        ll s=0,x=0;
        scanf("%lld %lld",&n,&k);
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==0)
                x++;
        }

        if(x==0)
        {
            if(k>n)
            {
                while(k>n)
                k-=2;
            }
            while(k>=0)
            {
                s= (s%m+(fact[n]*(fin((fact[k]*fact[n-k])%m,m-2)))%m)%m;
                k=k-2;
            }
        }
        else
        {

            n=n-x;
            if(k>n)
            k=n;
            while(k>=0)
            {
                s =(s%m+(fact[n]*(fin((fact[k]*fact[n-k])%m,m-2)))%m)%m;
                k=k-1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
