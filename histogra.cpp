#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005];
int main()
{
    ll n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        for(ll i=0;i<n;i++)
            scanf("%lld",&a[i]);
        stack<ll> s;
        ll m=0,ar,t;
        ll i=0;
        while(i<n)
        {
            if(s.empty()||a[s.top()]<=a[i])
                s.push(i++);
            else
            {
                t=s.top();
                s.pop();
                ar=a[t]*(s.empty()?i:i-s.top()-1);
                m=max(m,ar);
            }
        }
        while(!s.empty())
        {
            t=s.top();
            s.pop();
            ar=a[t]*(s.empty()?i:i-s.top()-1);
            m=max(m,ar);
        }
        cout<<m<<endl;
    }
}
