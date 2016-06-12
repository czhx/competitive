#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)

#define scll1(x) scanf("%lld",&x)
#define scll2(x,y) scanf("%lld%lld",&x,&y)
#define scll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)

#define pr1(x) printf("%d\n",x)
#define pr2(x,y) printf("%d %d\n",x,y)
#define pr3(x,y,z) printf("%d %d %d\n",x,y,z)

#define prll1(x) printf("%lld\n",x)
#define prll2(x,y) printf("%lld %lld\n",x,y)
#define prll3(x,y,z) printf("%lld %lld %lld\n",x,y,z)

#define pr_vec(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;

#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)

#define fr(i, a, b) for(i=a; i<=b; i++)
#define fb(i, a, b) for(i=a; i>=b; i--)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define debug( s ) cout << s << "\n"


const int maxn = 1e5 + 10;
const int mod = 1e9 + 7;
int main()
{
    int t;
    sc(t);
    while(t--)
    {
        long long n;
        scll1(n);
        long long a[n],i;
        fr(i,0,n-1)
        scll1(a[i]);
        long long dp[2][n];
        dp[0][0]=a[0];
        fr(i,1,n-1)
        dp[0][i]=max(dp[0][i-1]+a[i],a[i]);
        dp[1][0]=a[0];
        fr(i,1,n-1)
        dp[1][i]=max(dp[1][i-1]+a[i],dp[0][i-1]);
        long long x=-100000000000,y=-100000000000;
        fr(i,0,n-1)
        {
            if(dp[0][i]>x)
                x=dp[0][i];
        }
        fr(i,0,n-1)
        {
            if(dp[1][i]>y)
                y=dp[1][i];
        }
        prll1(max(x,y));
    }
}
