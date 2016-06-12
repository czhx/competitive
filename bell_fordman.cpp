#include <bits/stdc++.h>
using namespace std;
int cost[100][100];
int indeg[100];
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			cost[i][j]=0;
			else
			cost[i][j]=1e9;
		}
	}
	for(i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		cost[a][b]=c;
		indeg[b]++;
	}
	int dist[n+1];
	int s;
	cin>>s;
	for(i=1;i<=n;i++)
	dist[i]=cost[s][i];
	int k;
	for(k=2;k<=n-1;k++)
	{
		for(j=1;j<=n;j++)
		{
			if(j!=k&&indeg[j]>0)
			{
				for(i=1;i<=n;i++)
				{
					dist[j]=min(dist[j],dist[i]+cost[i][j]);
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	if(dist[i]<1e9)
	cout<<dist[i]<<"\n";
	else
	cout<<"Not reachable\n";
	return 0;
}
