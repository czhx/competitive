#include<bits/stdc++.h>
using namespace std;
inline long long int func(long long int n)
{
    long long int counter,i;
    for(counter=0,i=1;(!(n%i) && (counter++)) || i<=(n/2);i++);
    return counter;
}
int main()
{
    long long int a[112];
    a[1]=1;
    for(long long int i=2;i<=110;i++)
        a[i]=a[i-1]*i;
    long long int b[112];
    b[1]=1;
    b[2]=2;
    for(long long int i=3;i<=110;i++)
        b[i]=func(a[i]);
    for(long long int i=1;i<=110;i++)
        cout<<b[i]<<",";
}

