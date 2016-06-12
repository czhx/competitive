#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool flag[100005]={false};
int p[100005];
int n=100000;
int z=0;
void sieve()
{
    for(int i=2;i<=n;i++)
    {
        if(flag[i]==false)
        {
            p[z++]=i;
            for(int j=2;j*i<=n;j++)
                flag[j*i]=true;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    sieve();
    while(t--)
    {
        bool a[100002]={false};
        int n,m,i,j,c;
        scanf("%d %d",&m,&n);
        for(int x=0;x<z&&p[x]<=n;x++)
        {
            if(m<=p[x])
                c=2*p[x];
            else
            {
                c=m/p[x];
                c=c*p[x];
            }
            for(i=c-m;i<n-m+1;i+=p[x])
            {
                if(i>=0)
                    a[i]=true;
            }
        }
        for(i=0;i<n-m+1;i++)
        {
            if(i+m!=1)
                printf("%d\n",i+m);
        }
    }
}
