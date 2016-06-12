#include<bits/stdc++.h>
using namespace std;
int par[1000];
void un(int a,int b)
{
	par[a]=b;
}
int find(int a)
{
	if(par[a]==a)
	return a;
	else
	return find(par[a]);
}
struct node
{
	int s,d;
	int wt;
	bool operator<(const node e2) const
	{
	return (wt < e2.wt);
	}
};
int main()
{
	int n,e;
	cin>>n;
	cin>>e;
	int i;
	vector <node> v;
	vector <node>::iterator it;
	for(i=1;i<n+1;i++)
	par[i]=i;
	for(i=0;i<e;i++)
	{
		int sr,ds,w;
		cin>>sr>>ds>>w;
		node nd;
		nd.s=sr;nd.d=ds;nd.wt=w;
		v.push_back(nd);
	}
	sort(v.begin(),v.end());
	int tn=n;
	int val=0;
    for(it=v.begin();it!=v.end();it++)
		{
			node tmp=*it;
			int ts,td,tw;
			ts=tmp.s;td=tmp.d;tw=tmp.wt;
			if(find(ts)!=find(td))
			{
				cout<<"Edge ("<<ts<<" ,"<<td<<" ) weight "<<tw<<"\n";
				un(find(ts),find(td));
				val+=tw;
				tn--;
			}
			if(tn<=0)
			break;
		}
	cout<<"cost : "<<val<<"\n";
 return 0;

}
