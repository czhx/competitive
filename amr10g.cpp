#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    int n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int min=INT_MAX;
        for(int i=0;i<=n-k;i++)
            {
                if(a[i+k-1]-a[i]<min)
				min=a[i+k-1]-a[i];
            }
        cout<<min<<endl;
    }
}
