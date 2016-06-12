#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> a;
    set<int> b;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a.insert(x);
        if(b.end()!=b.find(x))
            b.erase(x);
        while(y--)
        {
            scanf("%d",&x);
            if(a.end()==a.find(x))
                b.insert(x);
        }
    }
    cout<<b.size()<<endl;
}
