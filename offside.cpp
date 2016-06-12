#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d;
    while(1)
    {
        scanf("%d %d",&a,&d);
        if((a==0)&&(d==0))
            break;
        int B[a],C[d];
        int min1=100000;
        for(int i=0;i<a;i++)
        {
            scanf("%d",&B[i]);
            if(B[i]<min1)
                min1=B[i];
        }
        for(int i=0;i<d;i++)
            scanf("%d",&C[i]);
        sort(C,C+d);
        int min2=C[1];
        if(min1<min2)
            printf("Y\n");
        else
            printf("N\n");
    }
}
