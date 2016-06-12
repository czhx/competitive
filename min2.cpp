#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int >v[n+2];
    int i;
    for(i=0;i<n;i++)
       {
           int a;
            cin>>a;
            v[0].push_back(a);
       }
    int x=1;
    while(x<=n)
    {
        for(i=0;i<v[x-1].size()-1;i+=2)
        {
            v[x].push_back(min(v[x-1][i],v[x-1][i+1]));
        }
        if(v[x-1].size()%2==1||v[x-1].size()==1)
            {
                int tmp=v[x-1][i];
                v[x].push_back(tmp);
            }
            if(v[x].size()==1)
                break;
        x++;
    }
    cout<<v[x][0]<<"\n";
    int mn=v[x][0];
    int ind=0,sm=1e9,r=x;
    while(r>0)
    {
        int a=2*ind;
        int b=(2*ind)+1;
        if(v[r-1][a]==mn)
        {
            ind = a;
            if(a<v[r-1].size())
            {
                sm=min(sm,v[r-1][a+1]);
            }
        }
        else if(v[r-1][b]==mn)
        {
            ind = b;
            sm=min(sm,v[r-1][b-1]);
        }
        r--;
    }
    cout<<sm<<"\n";
}

