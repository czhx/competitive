#include <bits/stdc++.h>
using namespace std ;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()

#define ull unsigned long long int
#define ui unsigned int
#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define vl vector<ll>
#define vll vector<pair<ll,ll> >
#define pll pair<ll,ll>
#define mp make_pair

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
int main()
{
    int p,n;
    string s;
    sc(p);
    while(p--)
    {
        sc(n);
        cin>>s;
        int i;
        int a[8];
        fr(i,0,7)
        a[i]=0;
        fr(i,0,37)
        {
            if(s.compare(i,3,"TTT")==0)
                a[0]++;
            else if(s.compare(i,3,"TTH")==0)
                a[1]++;
            else if(s.compare(i,3,"THT")==0)
                a[2]++;
            else if(s.compare(i,3,"THH")==0)
                a[3]++;
            else if(s.compare(i,3,"HTT")==0)
                a[4]++;
            else if(s.compare(i,3,"HTH")==0)
                a[5]++;
            else if(s.compare(i,3,"HHT")==0)
                a[6]++;
            else
                a[7]++;
        }
        printf("%d %d %d %d %d %d %d %d %d \n",n,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
    }
}
