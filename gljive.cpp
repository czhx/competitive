#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    int s=0;
    for(int i=0;i<10;i++)
    {
        s+=a[i];
        if(s>100)
        {
            if((abs(100-s))>(abs(100-(s-a[i]))))
            s-=a[i];
            break;
        }
    }
    cout<<s;
}
