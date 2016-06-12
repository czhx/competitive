#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node {
    long max1;
    long maxR;
    long maxL;
    long sum;
};
ll max(ll a,ll b)
{
    return a>b?a:b;
}
typedef struct node node;
node tree[4 * 50005];
long A[50005];
int n;
void build(int tl, int tr, int nod) {
    if (tl == tr)
        tree[nod].max1 = tree[nod].maxR = tree[nod].maxL = tree[nod].sum = A[tr];
    else {
        int mid=(tl+tr)/2;
        build(tl,mid,nod*2);
        build(mid+1,tr,nod*2+1);
        tree[nod].sum = tree[nod*2].sum+tree[nod*2+1].sum;
        long newMax = max(tree[nod*2].max1,tree[nod*2+1].max1);
        newMax = max(newMax,tree[nod*2].maxR + tree[nod*2+1].maxL);
        tree[nod].max1 = newMax;
        tree[nod].maxR = max(tree[nod*2+1].maxR,tree[nod*2+1].sum + tree[nod*2].maxR);
        tree[nod].maxL = max(tree[nod*2].maxL,tree[nod*2].sum + tree[nod*2+1].maxL);
        }
}
node query(int tl,int tr,int l,int r,int nod) {
    if (l<=tl && r >= tr)
        return tree[nod];
    int mid=(tl+tr)/2;
    if (r<=mid)
        return query(tl,mid,l,r,nod*2);
    if (l>mid)
        return query(mid+ 1,tr,l,r,nod*2+1);
    node p1 = query(tl,mid,l,r,nod*2);
    node p2 = query(mid+1,tr,l,r,nod*2+1);
    node result;
    result.sum = p1.sum + p2.sum;
    ll newMax = max(p1.max1, p2.max1);
    newMax = max(newMax, p1.maxR + p2.maxL);
    result.max1 = newMax;
    result.maxR = max(p2.maxR, p2.sum + p1.maxR);
    result.maxL = max(p1.maxL, p1.sum + p2.maxL);
    return result;
}
 int main() {
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
        scanf("%ld",&A[i]);
    build(0,n-1,1);
    int m;
    scanf("%d", &m);
    int x,y;
    for (i = 0; i < m; i++) {
        scanf("%d %d",&x,&y);
        node ans = query(0,n-1,x-1,y-1,1);
        printf("%ld\n",ans.max1);
    }
    return 0;
}
