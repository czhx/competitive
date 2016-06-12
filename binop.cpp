#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        int flag=0;
        char p=a[0];
        for(ll i=0;i<a.length();i++)
        {
            if(a[i]!=p)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Unlucky Chef\n";
            continue;
        }
        ll x=0,y=0;
        for(ll i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]=='0'&&b[i]=='1')
                    x++;
                else if(a[i]=='1'&&b[i]=='0')
                    y++;
            }
        }
        cout<<"Lucky Chef\n"<<max(x,y)<<endl;
    }
}
