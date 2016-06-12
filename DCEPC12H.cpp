#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        double ans = (n+1)/2.0;
        printf("%0.6lf\n",ans);
    }
    return 0;
}
