#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        cin>>a[0][i];
    int x = n;
    int l=2;
    int i;
    for(i=0;l>1;i++)
    {
        int j=0;
        l=0;
        while(j<x)
        {
            if(j!=x-1){
            if(a[i][j]>a[i][j+1])
                a[i+1][l]=a[i][j+1];
            else
                a[i+1][l]=a[i][j];
            j+=2;}
            else
                a[i+1][l]=a[i][j++];
            l++;
        }
        a[i+1][l]=-1;
        x=l;
    }
    int min=a[i-1][0];
    cout<<"Minumum: "<<min<<endl;
    int min2=100;
    x=0;
    for(i=i-2;i>=0;i--)
    {

        if(a[i][x]==min){
            if(a[i][x+1]!=-1&&min2>a[i][x+1])
            min2=a[i][x+1];
            x=2*x;
        }
        else
        {
            if(min2>a[i][x])
            min2=a[i][x];
            x=2*(x+1);
        }
    }
    cout<<"Second minimum: "<<min2;
}
