#include<bits/stdc++.h>
int nof(int);
int main()
{
    int i,n,nor=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        nor+=nof(i);
    printf("%d",nor);
    return 0;
}
int nof(int n)
{
    int i,sr,nf=1;
    sr=sqrt(n);
    for(i=2;i<=sr;i++)
        if(n%i==0)
        nf++;
    return nf;
}
