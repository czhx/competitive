#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    scanf("%lld %lld",&n,&m);
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);
    ll j=0,max=0,c=0;
    for(ll i=0;i<n;i++)
    {
        c+=a[i];
        while(c>m)
            c=c-a[j++];
        if(c>max)
            max=c;
    }
    cout<<max<<endl;
}
