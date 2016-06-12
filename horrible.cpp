#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll tree[400005],lazy[400005];
ll a[100005];
ll query(ll tl,ll tr,ll l,ll r,ll node)
{
    if(tl>tr||tl>r||tr<l)
        return 0;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(tl!=tr)
        {
            lazy[node*2+1]+=(lazy[node]/(tr-tl+1))*(((tl+tr)/2)-tl+1);
            lazy[node*2+2]+=(lazy[node]/(tr-tl+1))*(tr-((tl+tr)/2));
        }
        lazy[node]=0;
    }
    if(tl>=l&&tr<=r)
    return tree[node];
    ll mid=(tl+tr)/2;
    ll p1=query(tl,mid,l,r,node*2+1);
    ll p2=query(mid+1,tr,l,r,node*2+2);
    return (p1+p2);
}
void update(ll tl,ll tr,ll l,ll r,ll node,ll x)
{
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(tl!=tr)
        {
            lazy[node*2+1]+=(lazy[node]/(tr-tl+1))*(((tl+tr)/2)-tl+1);
            lazy[node*2+2]+=(lazy[node]/(tr-tl+1))*(tr-((tl+tr)/2));
        }
        lazy[node]=0;
    }
    if(tl>tr||l>tr||tl>r)
        return;
    if(tl>=l&&tr<=r)
    {
        tree[node]+=(tr-tl+1)*x;
        if(tl!=tr)
        {
            ll mid=(tl+tr)/2;
            lazy[node*2+1]+=x*(mid-tl+1);
            lazy[node*2+2]+=x*(tr-mid);
        }
        return;
    }
    ll mid=(tl+tr)/2;
    update(tl,mid,l,r,node*2+1,x);
    update(mid+1,tr,l,r,node*2+2,x);
    tree[node]=tree[node*2+1]+tree[node*2+2];
}
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,c,x,p,q,v;
        cin>>n>>c;
        for(ll i=0;i<400005;i++)
            tree[i]=lazy[i]=0;
        while(c--)
        {
            cin>>x;
            if(x==0)
            {
                cin>>p>>q>>v;
                update(0,n-1,p-1,q-1,0,v);
            }
            else
            {
                cin>>p>>q;
                cout<<query(0,n-1,p-1,q-1,0)<<endl;
            }
        }

    }
}
