#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,x;
    ll p;
    scanf("%d",&t);
    while(t--)
    {
        ll a[18]={0};
        scanf("%lld",&p);
        p=p-1;
        for(int i=0;p>0;i++)
        {
            a[17-i]=(p%5)*2;
            p=p/5;
        }
        ll num=0;
        for(int j=0;j<=17;j++)
        {
            num=(num*10)+a[j];
        }
        cout<<num<<endl;
    }
}
