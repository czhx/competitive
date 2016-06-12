#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define scll1(x) scanf("%lld",&x)
#define scll2(x,y) scanf("%lld %lld",&x,&y)
vector<ll> a[10005];
ll d[10005];
ll i,u,v,n,x,y,top;
void bfs(ll start)
{
    bool visited[n+1];
    for(i=0;i<=n;i++)
        visited[i]=false;
    for(i=0;i<=n;i++)
        d[i]=0;
    queue<ll> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        top=q.front();
        q.pop();
        for(i=0;i<a[top].size();i++)
        {
            if(visited[a[top][i]]==false)
            {
                d[a[top][i]]=d[top]+1;
                visited[a[top][i]]=true;
                q.push(a[top][i]);
            }
        }
    }
    x=0;
    for(i=0;i<n+1;i++)
    {
        x=max(x,d[i]);
        if(x==d[i])
            y=i;
    }
}
int main()
{
    scll1(n);
    ll t=n-1;
    while(t--)
    {
        scll2(u,v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs(1);
    bfs(y);
    printf("%lld\n",x);
    return 0;
}
