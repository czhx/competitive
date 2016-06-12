#include<bits/stdc++.h>
using namespace std;
int dp[3000][3000];
int min(int x,int y,int z)
{
    return min(min(x,y),z);
}
int func(string a,string b,int m,int n)
{
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
        }
    }
    return dp[m][n];
}
int main()
{
    int t,x,y;
    string s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s1>>s2;
        printf("%d\n",func(s1,s2,s1.length(),s2.length()));
    }
}
