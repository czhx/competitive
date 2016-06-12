#include<bits/stdc++.h>
using namespace std;
int main()
{
    float g,b;
    while(1)
    {
        scanf("%f %f",&g,&b);
        if((g==-1)&&(b==-1))
            return 0;
        if(b>=g)
        {
            printf("%.0f\n",ceil(b/(g+1)));
        }
        if(g>b)
        {
            printf("%.0f\n",ceil(g/(b+1)));
        }
    }
}
