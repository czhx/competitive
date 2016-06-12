#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        int c=0;
        while(x>1)
            {
                c++;
                x/=2;
            }
        printf("%d\n",c);
    }
}
