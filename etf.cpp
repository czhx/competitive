#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int result=n;
        for(int p=2;p*p<=n;p++)
        {
            if(n%p==0)
            {
                while(n%p==0)
                    n/=p;
                result-=result/p;
            }
        }
        if(n>1)
            result-=result/n;
        printf("%d\n",result);
    }
}
