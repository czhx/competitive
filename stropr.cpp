#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int t,n,x;
    long long int m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %lld",&n,&x,&m);
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long ans;
        for(long long int i=x-1)
        /*for(long long int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                a[j]=(a[j]+a[j-1])%mod;
            }
        }*/
        printf("%lld",a[x-1]);
    }
}
