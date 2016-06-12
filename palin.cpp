#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    string s;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        string s1=s;
        reverse(s.begin(),s.end());
        int x=s.length();
        if(s1==s)
        {
           if(x&1)
                s[x/2]++;
           else
            s[x/2]=++s[x/2-1];
        }
        else
        {
            if(x&1)
            {

            }
        }
    }
}
