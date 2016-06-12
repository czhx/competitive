#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l=str.length();
    int k,x,y,z,q;
    int p[l][3];
    for(int i=0;i<l;i++)
        for(int j=0;j<3;j++)
        p[i][j]=0;
    if(str[0]=='R')
            p[0][0]++;
    if(str[0]=='G')
            p[0][1]++;
    if(str[0]=='B')
            p[0][2]++;
    for(int i=1;i<l;i++)
    {
        if(str[i]=='R')
                {p[i][0]=p[i-1][0]+1;
                p[i][1]=p[i-1][1];
                p[i][2]=p[i-1][2];
                }
        if(str[i]=='G')
                {p[i][0]=p[i-1][0];
                p[i][1]=p[i-1][1]+1;
                p[i][2]=p[i-1][2];
                }
        if(str[i]=='B')
                {
                    p[i][0]=p[i-1][0];
                p[i][1]=p[i-1][1];
                p[i][2]=p[i-1][2]+1;
                    }
    }
    printf("\n");
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d %d",&k,&x,&y,&z);
        int flag=0;
        if(k==1)
        {
            for(int i=0;i<l;i++)
            {
                if(((p[i][0])>=x)&&((p[i][1])>=y)&&((p[i][2])>=z))
            {
                flag=1;
                printf("%d\n",i+1);
                break;
            }
            }
        }
        else
        {
        for(int i=0;i<l;i++)
        {
        if(((p[i][0]-p[k-2][0])>=x)&&((p[i][1]-p[k-2][1])>=y)&&((p[i][2]-p[k-2][2])>=z))
            {
                flag=1;
                printf("%d\n",i+1);
                break;
            }
        }
        }
        if(flag==0)
            printf("-1\n");
    }
}
