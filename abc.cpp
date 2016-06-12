#include<bits/stdc++.h>
using namespace std;
#define m 100000
int main()
    {
    long long n,q,x,y;
    cin>>n;
    long long A[n];
    for(long long i=0;i<n;i++)
        cin>>A[i];
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        /*if ((x+1<=n)&&(A[x+1]==0)&&(x!=y))
            cout<<"Odd"<< endl;
        else
            cout<<(A[x+1]%2==0?"Even":"Odd")<<endl;*/
        if((A[x]%2==1) || (A[x+1]==0 && x<y)) printf("Odd\n");
        else printf("Even\n");
    }
}
