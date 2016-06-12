#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            return 0;
        long long a[n+10];
        for(long long i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        stack<long long> st;
        long long flag=1,s=1;
        for(long long i=1;i<=n;i++)
        {
            if(a[i]==s)
                s++;
            else
            {
                if(st.empty())
                    st.push(a[i]);
                else if(!st.empty() && st.top()<a[i])
                {
                    flag=0;
                    break;
                }
                else
                    st.push(a[i]);
            }
            while(!st.empty() && st.top()==s)
            {
                st.pop();
                s++;
            }
        }
        if(flag==0)
            printf("no\n");
        else if(s-1==n && st.empty())
            printf("yes\n");
    }
    return 0;
}
