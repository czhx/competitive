#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,b;
    scanf("%d",&n);
    bool a[n];
    for(int i=0;i<n;i++)
        a[i]=false;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b);
        if (b==0)
            continue;
        a[b-1]=true;
    }
    for(int i=0;i<n;i++)
    {
        if(!a[i])
            cout<<i+1<<" ";
    }
}
