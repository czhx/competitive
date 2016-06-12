#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%6==0)
            printf("Misha\n");
        else
            printf("Chef\n");
    }
}
