#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,w;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&h,&w);
        int dp[h+1][w+2];
        for(int i=0;i<h+1;i++)
            dp[i][0]=dp[i][w+1]=0;
        for(int i=0;i<w+2;i++)
            dp[0][i]=0;
        for(int i=1;i<=h+1;i++)
        {
            for(int j=1;j<=w;j++)
            {
                scanf("%d",&dp[i][j]);
                dp[i][j]+=max(max(dp[i-1][j-1],dp[i-1][j]),dp[i-1][j+1]);
            }
        }
        int max=0;
        for(int i=1;i<=w;i++)
            if(dp[h][i]>max)
            max=dp[h][i];
    }
}
