#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q,t;
    scanf("%lld %lld",&n,&q);
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);
    ll max=*max_element(a,a+n);
    ll min=*min_element(a,a+n);
    while(q--)
    {
        scanf("%lld",&t);
        if((t>=min)&&(t<=max))
            printf("Yes\n");
        else
            printf("No\n");
    }
}
