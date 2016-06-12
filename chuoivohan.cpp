#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c==0)
        {
            if(a==b)
                printf("YES\n");
            else
                printf("NO\n");
        }
    else if(c>0)
    {
        if((b-a)%c==0&&b>=a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        c=-c;
        if((a-b)%c==0&&b<=a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
