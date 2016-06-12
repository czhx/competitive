#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    int flag=1;
    long long num1,num2,ans,count;
    char op;
    cin>>tc;
    while(tc--)
    {
        flag=1;
        count=0;
        while(flag)
        {
        count++;
        if(count==1)
            cin>>num1;
        else
            num1=ans;
        op=' ';
        while(op == ' ')
            cin>>op;
        if(op=='=')
        {
            cout<<ans<<"\n";
            flag=0;
        }
        else
            cin>>num2;
        switch(op)
        {
            case  '+' : ans=num1+num2;
                        break;
            case  '-' : ans=num1-num2;
                        break;
            case  '*' : ans=num1*num2;
                        break;
            case  '/' : ans=num1/num2;
                        break;
            default : break;
        }
        }
    }
        return 0;
}
