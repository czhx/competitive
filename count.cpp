#include<bits/stdc++.h>
using namespace std;
void cs(int A[])
{
    int B[50];
    int C[10];
    for(int i=1;i<=10;i++)
        C[i]=0;
    for(int i=1;i<=sizeof(A)/4;i++)
        C[A[i]]++;
    for(int i=2;i<=10;i++)
        C[i]+=C[i-1];
    for(int j=sizeof(A)/4;j>=1;j--)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }
    for(int i=1;i<=10;i++)
        cout<<B[i]<<" ";
    cout<<endl;
}
int main()
{
    int A[]={1,4,1,2,7,5,2};
    cs(A);
}
