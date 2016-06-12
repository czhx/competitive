#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll a[n];
        int flag=0;
        for(ll i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
                if(i>1)
                {
                    if((a[i]==a[i-1])&&(a[i]==a[i-2]))
                    {
                        flag=1;
                    }
                }
            }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
