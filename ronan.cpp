#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,h[1e8];
    scanf("%lld %lld",&n,&q);
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);

    }
    while(q--)
    {
        scanf("%lld",&h);
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            if(a[i]>h)
                ans += (a[i]-h);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
