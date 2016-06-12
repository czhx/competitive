#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,c;
    long long n,n1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        n1=n;
        while(n1>0)
        {
            i=n1%10;
            if(i!=0)
            {
                if(n%i==0)
                c++;
            }
            n1/=10;
        }
        cout<<c<<endl;
    }
}
