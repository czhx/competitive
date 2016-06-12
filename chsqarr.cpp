#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int a[1005][1005],c[1005][1005];
int b[1005][1005];
int main()
{
    int n,m,t,p,q;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n;i++)
        a[i][0]=0,b[i][0]=0;
    for(int i=0;i<=m;i++)
        a[0][i]=0,b[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
            //cout<<b[i][j]<<" ";
        }
        //cout<<endl;
    }
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<1005;i++)
            for(int j=0;j<1005;j++)
                c[i][j]=0;
        scanf("%d %d",&p,&q);
        int k=m-q+1,j;
        for(int i=1;i<=n;i++)
        {
            int lr[m+1],rl[m+1];
            lr[1]=a[i][1];
            for(j=2;j<=m;j++)
            {
                if(j%q==0)
                    lr[j]=a[i][j];
                else
                    lr[j]=max(lr[j-1],a[i][j]);
            }
            for(j=m;j>=1;j--)
            {
                if(j==m)
                    rl[j]=a[i][j];
                else if(j%q==0)
                        rl[j]=a[i][j];
                else
                    rl[j]=max(rl[j+1],a[i][j]);
            }
            for(j=1;j<=k;j++)
                c[i][j]=max(rl[j],lr[j+q-1]);
        }
        int k1=n-p+1;
        for(int i=1;i<=k;i++)
        {
            int lr[n+1],rl[n+1];
            lr[1]=c[1][i];
            for(j=2;j<=n;j++)
            {
                if(j%p==0)
                    lr[j]=c[j][i];
                else
                    lr[j]=max(lr[j-1],c[j][i]);
            }
            for(j=n;j>=1;j--)
            {
                if(j==n)
                    rl[j]=c[j][i];
                else if(j%p==0)
                        rl[j]=c[j][i];
                else
                    rl[j]=max(rl[j+1],c[j][i]);
            }
            for(j=1;j<=k1;j++)
                c[j][i]=max(rl[j],lr[j+p-1]);
        }
        int ans=INT_MAX;
        for(int i=1;i<=k1;i++)
        {
            for(int j=1;j<=k;j++)
            {
                int d=b[i+p-1][j+q-1]-b[i+p-1][j-1]-b[i-1][j+q-1]+b[i-1][j-1];
                int x=(p*q*c[i][j])-d;
                ans=min(ans,x);
                //cout<<ans<<" ";
            }
            //cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
