#include<bits/stdc++.h>
using namespace std;
#define MAX 10
void countsort(int t[])
{
    cout<<sizeof(t);
    //int output[sizeof(t)/4];
    int count[MAX+1],i;
    //memset(count,0,sizeof(count));
    for(int i=0;i<=MAX;i++)
        count[i]=0;
    for(i=0;t[i];i++)
        ++count[t[i]];
    for(i=1;i<MAX;i++)
        {count[i]+=count[i-1];cout<<count[i]<<" ";}
    /*for(i=0;t[i];i++)
    {
        output[count[t[i]]-1]=t[i];
        --count[t[i]];
    }*/
    //for(i=0;i<sizeof(t);i++)
        //t[i]=output[i];
}
int main()
{
    int t[]={1,4,1,2,7,5,2};
    countsort(t);
    cout<<"Sorted array: ";
    //for(int i=0;i<sizeof(t)/4;i++)
        //cout<<t[i]<<" ";
    return 0;
}
