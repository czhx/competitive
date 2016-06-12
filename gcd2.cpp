#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long x,long long y)
{
    if(!y)
        return x;
    else
        gcd(y,x%y);
}
int main()
{
    int t,a;
    string b;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b;
        if(a==0)
            cout<<b<<endl;
        else
        {
            long long r=0;
            int l=b.length();
            for(int i=0;i<l;i++)
            {
                r=10*r+(b[i]-'0');
                r=r%a;
            }
            cout<<gcd(a,r)<<endl;
        }
    }
}
