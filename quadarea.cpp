#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
#define scll1(x) scanf("%lld",&x)
int main()
{
    ll t;
    scll1(t);
    while(t--)
    {
        double a,b,c,d,x,ar;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        x=(a+b+c+d)/2;
        //cout<<x<<" ";
        ar=sqrt((x-a)*(x-b)*(x-c)*(x-d));
        printf("%.2lf\n",ar);
    }
}
