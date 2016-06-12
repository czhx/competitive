#include<bits/stdc++.H>
using namespace std;
int c[100][100];
int main()
{
    int n,m,a,b,d;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            c[i][j]=1e9;
    for(int i=1;i<=n;i++)
        c[i][i]=0;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>d;
        c[a][b]=d;
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
        }
    }
    cout<<"Distance between all pairs: \n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(c[i][j]==1e9)
                cout<<"inf ";
            else
             cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
