#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    scanf("%lld %lld",&n,&q);
    long long a[n],s[n+1];
    for(long long i=0;i<=n;i++)
        s[i]=0;
    for(long long i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(long long i=n-1;i>=0;i--){
        s[i]=s[i+1]+a[i];
    }
    long long int h;
    while(q--)
    {
        scanf("%lld",&h);
        long long int x = upper_bound(a,a+n,h)-a;
        long long int ans = s[x]-h*(n-x);
        printf("%lld\n",ans);
    }
    return 0;
}
