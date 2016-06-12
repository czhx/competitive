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
long long int func(ll a[],ll temp[],ll left,ll right);
long long int mer(ll a[], ll temp[], ll left, ll mid, ll right);
long long int fun(ll a[],ll x)
{
    ll temp[x];
    return func(a, temp, 0, x - 1);
}
long long int func(ll a[],ll temp[],ll left,ll right)
{
  ll mid, inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = func(a, temp, left, mid);
    inv_count += func(a, temp, mid+1, right);
    inv_count += mer(a, temp, left, mid+1, right);
  }
  return inv_count;
}
long long int mer(ll a[], ll temp[], ll left, ll mid, ll right)
{
  ll i, j, k;
  ll inv_count = 0;

  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (a[i] <= a[j])
    {
      temp[k++] = a[i++];
    }
    else
    {
      temp[k++] = a[j++];
      inv_count = inv_count + (mid - i);
    }
  }
  while (i <= mid - 1)
    temp[k++] = a[i++];
  while (j <= right)
    temp[k++] = a[j++];
  for (i=left; i <= right; i++)
    a[i] = temp[i];
 return inv_count;
}
int main()
{
    ll t,n;
    scll1(t);
    while(t--)
    {
        scll1(n);
        ll a[n],c=0;
        for(ll i=0;i<n;i++)
        {
            scll1(a[i]);
        }
        prll1(fun(a,n));
    }
}
