#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=0;
        }
    }
    int temp;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='1'){
                a[i][j]=1;
                if(i-1>=0)
                    a[i-1][j]=1;
                if(i+1<n)
                    a[i+1][j]=1;
                if(j-1>=0)
                    a[i][j-1]=1;
                if(j+1<m)
                    a[i][j+1]=1;
                if((i+1<n)&&(j+1<m))
                    a[i+1][j+1]=1;
                if((i+1<n)&&j-1>=0)
                    a[i+1][j-1]=1;
                if((i-1>=0)&&j-1>=0)
                    a[i-1][j-1]=1;
                if((i-1>=0)&&j+1<m)
                    a[i-1][j+1]=1;
            }
        }
        }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
