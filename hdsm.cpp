#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100001];
    scanf("%s",c);
    int len=strlen(c);
    int r[len+1];
    int g[len+1];
    int b[len+1];
    for(int i=0;i<=len;i++)
        {
            r[i]=0;
            b[i]=0;
            g[i]=0;
        }
    for(int i=1;i<=len;i++)
    {
        if(c[i-1]=='R')
                r[i]=r[i-1]+1;
        else
            r[i]=r[i-1];
        if(c[i-1]=='B')
                b[i]=b[i-1]+1;
        else
            b[i]=b[i-1];
        if(c[i-1]=='G')
                g[i]=g[i-1]+1;
        else
            g[i]=g[i-1];
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int k,x,y,z,i,flag=0;
        scanf("%d %d %d %d",&k,&x,&y,&z);
        int rm=lower_bound(r,r+len+1,x+r[k-1])-r;
        int bm=lower_bound(b,b+len+1,z+b[k-1])-b;
        int gm=lower_bound(g,g+len+1,y+g[k-1])-g;
        int h=max(rm,bm);
        h=max(h,gm);
        if(h>len)
            printf("-1\n");
        else
            printf("%d\n",h);
    }
    return 0;
}
