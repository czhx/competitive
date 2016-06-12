#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&x);
        if(x==0)
            printf("Airborne wins.\n");
        else
            printf("Pagfloyd wins.\n");
    }
}
