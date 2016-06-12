#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //sort(a,a+4);
    int count=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                for(int l=1;l<=d;l++)
                {
                    if (!(((i==j)&&(k==l)) || ((i==l)&&(j==k)) || ((i==k)&&(j==l)) || ((i==j)&&(j==k)&&(k==l)))
                   && (i<=j)&&(j<=k)&&(k<=l)) count++;
                }
            }
        }
    }
    printf("%d",count);
}
