#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> a[10005];
ll i,u,v,n,m;
bool dfs(vector<ll> a[],ll u)
{
    bool visited[n+1];
    stack<ll> s;
    for(ll i=0;i<n+1;i++)
        visited[i]=false;
    s.push(u);
    ll t,t1,c=0;
    while(!s.empty())
    {
        c++;
        t=s.top();
        s.pop();
        if(visited[t])
            return false;
        else
        {
            visited[t]=true;
            for(i=0;i<a[t].size();i++)
            {
                t1=a[t][i];
                s.push(t1);
            }
        }
    }
    if(c!=n)
        return false;
    else
        return true;
}
int main()
{
    scanf("%lld %lld",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld %lld",&u,&v);
        a[u].push_back(v);
    }
    if(dfs(a,1) && m+1==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
