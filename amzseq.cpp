#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n+1];
    a[0]=3;
    a[1]=7;
    for(ll i=2;i<n;i++)
        a[i]=2*a[i-1]+a[i-2];
    cout<<a[n-1];
}
