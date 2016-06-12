#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//bool b[100002]={false};
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m,a,s=0;
        scanf("%d %d",&n,&m);
        bool b[n+2];
        for(int k=0;k<n+2;k++)
            b[k]=false;
        while(m--)
        {
            scanf("%d",&a);
            b[a]=b[a-1]=b[a+1]=true;
        }
        for(int j=1;j<=n;j++)
        {
            if(b[j]==true)
                s++;
        }
        printf("Case %d: %d\n",i,s);
    }
}
