#include<bits/stdc++.h>
using namespace std;
string p,q;
int b[100][100];
int c[100][100];
void show(int m,int n)
{
    if(m==0||n==0)
        return ;
    if(b[m][n]==0)
        {
            show(m-1,n-1);
            cout<<p[m-1];
        }
    else if(b[m][n]==1)
        {
        show(m,n-1);
        }
    else
        show(m-1,n);
}
void lcs(string x,string y,int m,int n)
{
    for(int i=1;i<=m;i++)
        c[i][0]=0;
    for(int j=1;j<=n;j++)
        c[0][j]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=0;
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]=-1;
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]=1;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
   cout<<"asdasd\n";
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(c[i][j]==c[m][n])
            {
               cout<<i<<" "<<j<<"\n";
                show(i,j);
                cout<<"\n";
            }
        }
    }
}
int main()
{

    cin>>p>>q;
    int s=p.length();
    int t=q.length();
    lcs(p,q,s,t);
}
