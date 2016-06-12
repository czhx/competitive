#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==-1)
            break;
        long long x = ((4*n)-1)/3;
        long long p = sqrt(x);
        if(p*p==x)
            printf("Y\n");
        else
            printf("N\n");
    }
}
