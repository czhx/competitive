#include <bits/stdc++.h>
using namespace std;
long long int nCr(int n,int r)
{
    long long fact=1,x=1;
    r = (n-r>r)?r:n-r;
    for(int i=0;i<r;i++)
    {
        fact=fact*(n-i)/(i+1);
    }
    return fact;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r;
        scanf("%d %d",&n,&r);
        printf("%lld\n",nCr(n-1,r-1));
    }
}
