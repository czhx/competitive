#include<bits/stdc++.h>
using namespace std;
#define m 1000007
/*long long fun(int x,int n)
{
    long long ans=1;
    while(n>0)
    {
        if(n%2==1)
            ans=(ans*x)%m;
        x=(x*x)%m;
        n/=2;
    }
    return ans;
}*/
int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long ans = (n*n - n)/2;
        long long ans1= (3*ans + 2*n)%m;
        printf("%lld\n",ans1);
        //printf("%lld\n",2>>n);
    }
}
