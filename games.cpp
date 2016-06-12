#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
    if(!b)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        ll number=0,frac,flag;
        int c=0;
        flag=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                flag=1;
                break;
            }
            else
                c++;
        }
        //cout<<c<<" ";
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='.')
            {
                number=number*10+(s[i]-'0');
                //cout<<number<<" ";
            }
        }
        //cout<<number<<" ";
        frac=1;
        if(flag)
            frac=pow((double)10,c);
        //cout<<frac<<" ";
        printf("%lld\n",frac/gcd(number,frac));
    }
}
