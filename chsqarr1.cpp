#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sum[1010][1010];
int ar[1010][1010];
int max_left[1010];
int max_right[1010];
int sliding_max[1010][1010];
int max_final[1010][1010];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            sum[i][j]=0;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
           // sum[i][j]=0;
            if(i>0&&j>0)
            cin>>ar[i][j];
        }
    }
    //sum[1][1]=ar[1][1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           // if(!(i==1&&j==1))
            sum[i][j] = ar[i][j]+sum[i-1][j]+sum[i][j-1] - sum[i-1][j-1];
        }
    }
   /* int a=1,b=1;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int sm=sum[i+a][j+b] +sum[i][j] - sum[i+a][j] - sum[i][j+b];
                cout<<sm<<" ";
           //     int mx = max_final[i][j];
             //   ans=min(ans , mx*a*b - sm);
            }
            cout<<"\n";
        }
*/
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int n1=n-a+1,m1=m-b+1;
        for(int i=0;i<n;i++)
        {

            max_left[0] = ar[i+1][1];
            max_right[m-1]=ar[i+1][m];
            for(int k =1;k<m;k++)
            {
                max_left[k] = (k%b==0) ?ar[i+1][k+1] : max(max_left[k-1],ar[i+1][k+1]);
                int  j = m-k-1;
                max_right[j] = (j%b==0) ? ar[i+1][j+1]: max(max_right[j+1],ar[i+1][j+1]);
            }
            //if(i==0)
              //  cout<<max_left[1]<<" mxlft "<<max_right[1+b-1]<<"\n";
            int j=0;
            for(int k=0;k+b<=m;k++)
            {
                sliding_max[i][j++] = max(max_left[k+b-1],max_right[k]);
            }
        }
    /*    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m1;j++)
                cout<<sliding_max[i][j]<<" ";
            cout<<"\n";
        }*/
        for(int i=0;i<m1;i++)
        {
          //  int max_left[n],max_right[n];
            max_left[0] = sliding_max[0][i];
            max_right[n-1] = sliding_max[n-1][i];
            for(int k=1;k<n;k++)
            {
                max_left[k]= (k%a==0) ? sliding_max[k][i] : max(sliding_max[k][i],max_left[k-1]);
                int j = n-k-1;
                max_right[j] = (j%a==0)? sliding_max[j][i] : max(sliding_max[j][i],max_right[j+1]);
            }
            int j=0;
            for(int k=0;k+a<=n;k++)
            {
                max_final[j++][i] = max(max_left[k+a-1],max_right[k]);
            }
        }
        int ans = 1000000007;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                int sm = sum[i+a][j+b] + sum[i][j] - sum[i+a][j] - sum[i][j+b];
              //  cout<<sm<<" ";
                int mx = max_final[i][j];
          //      cout<<mx<<" ";
                ans=min(ans,mx*a*b-sm);
                //cout<<ans<<" ";
            }
            cout<<"\n";
        }
        cout<<ans<<"\n";
    }

    return 0;
}
