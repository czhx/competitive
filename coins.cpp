#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> m;
long long int dp(long long int k){
    long long int a;
    if(k==0){
        return 0;
    }
    a=m[k];
    /* if(k<12){
        return k;
    } */
    if(k<12){
        return k;
    }
    else if(a==0){
        a=max(k,dp(k/2)+dp(k/4)+dp(k/3));
        m[k]=a;
    }
    return a;

}
int main(){
    long long int n,t;
    while(scanf("%lld",&n)>0){
        t=dp(n);
        cout << t << endl;
    }
    return 0;
}
