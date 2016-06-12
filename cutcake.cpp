#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000000];
int main()
{
    int t;
    ll n;
    a[0]=1;
    for(ll i=1;i<1000000;i++)
        a[i]=a[i-1]+i;
     // cout<<a[999999]<<endl;
   // cout<<endl;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0)
            printf("0\n");
        else
        {
            ll x=lower_bound(a,a+1000000,n)-a;
            printf("%lld\n",x);
        }
    }
}
