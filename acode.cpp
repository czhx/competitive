#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[5005];
int main()
{
    string s;
    while(1)
    {
        cin>>s;
        for(int i=0;i<5005;i++)
            dp[i]=0;
        if(s[0]=='0')
            break;
        dp[0]=1;
        for(int i=1;i<s.length();i++)
        {
            int x=((s[i-1]-'0')*10)+(s[i]-'0');
            if(s[i]-'0')
                dp[i]=dp[i-1];
            if((x>=10)&&(x<=26))
                dp[i]+=dp[(i-2)<0?0:(i-2)];
        }
        cout<<dp[s.length()-1]<<endl;
    }
}
