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
int main()
{
    ll t;
    scll1(t);
    while(t--)
    {
        int n,m,d,x,s=0;
        sc3(n,m,d);
        //scanf("%lld %lld %lld",&n,&m,&d);
        for(int i=0;i<n;i++)
        {
            sc(x);
            while((x-d)>0)
            {
                s++;
                x-=d;
            }
            //s+=x/d;
        }
        if(s>=m)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
