#include<bits/stdc++.h>
using namespace std;
#define ll long long int
inline ll gcd(ll a,ll b)
{
    if(!b)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        {
        ll n;
        scanf("%lld",&n);
        if(n==1)
            printf("0\n");
        else
        {for(ll j=n/2;j>0;j--)
        {
            if(gcd(n,j)==1)
            {
                cout<<j<<endl;
                break;
            }
        }
        }
        }
}
