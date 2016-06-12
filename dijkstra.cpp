#include<bits/stdc++.h>
using namespace std;
#define V 9
int minDist(int dist[],bool s[])
{
    int min=INT_MAX,m;
    for(int v=0;v<V;v++)
    {
        if(s[v]==false&&dist[v]<=min)
        {
            min=dist[v];
            m=v;
        }
    }
    return m;
}
void dijk(int graph[V][V],int src)
{
    int dist[V];
    bool s[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        s[i]=false;
    }
    dist[src]=0;
    for(int c=0;c<V-1;c++)
    {
        int u=minDist(dist,s);
        s[u]=true;
        for(int v=0;v<V;v++)
        {
            if(!s[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
                dist[v]=dist[u]+graph[u][v];
        }
    }
    cout<<"Vertex distance from source: \n";
    for(int i=0;i<V;i++)
        cout<<i<<" "<<dist[i]<<endl;
}
int main()
{
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    dijk(graph,0);
    return 0;
}
