#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long func(int x,int n)
{
    long long ans=1;
    while(n>0)
    {
        if(n%2==1)
            ans=(ans*x)%m;
        x=(x*x)%m;
        n/=2;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    long long a;
    while(t--)
    {
        scanf("%lld",&a);
        printf("%lld\n",func(2,a-1));
    }
}
