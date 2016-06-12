#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
#define sc(x) scanf("%d",&x)
#define scll1(x) scanf("%lld",&x)
#define pr1(x) printf("%d\n",x)
#define prll1(x) printf("%lld\n",x)
int func(int a,ll b)
{
    ll ans=1,t;
    t=a%10;
    while(b>0)
    {
        if(b&1)
            ans=(ans*t)%10;
        t=(t*t)%10;
        b/=2;
    }
    return ans%10;
}
int main()
{
    int t;
    sc(t);
    while(t--)
    {
        string s;
        ll b;
        cin>>s;
        scll1(b);
        int a=s[s.length()-1]-'0';
        pr1(func(a,b));
    }
}
