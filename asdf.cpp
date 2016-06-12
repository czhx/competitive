#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    long long int m= 1000000007;
    scanf("%d",&t);
    while(t--)
    {
        cin>>str;
        long long num=0,cnt=0;
        int j=0;
        for(long long int i=str.length()-1;i>=0;j++,i--)
        {
            if(str[i]=='1')
            {
                cnt++;
                num = ((num % m) + ((long long int)(pow(2,j))% m)% m);
            }
        }
        printf("%lld %lld\n",num,cnt);
    }
}
