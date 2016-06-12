#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            cout<<char((i%26)+97);
        cout<<endl;
    }
}
