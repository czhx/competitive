#include <bits/stdc++.h>
using namespace std;
int x[100];
bool place(int k , int i)
{
	for(int j=1;j<=k-1;j++)
	{
		if((x[j]==i)||(abs(j-k)==abs(x[j]-i)))
		{
			return false;
		}
	}
		return true;
}
int nqueen(int k,int n)
{
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k]=i;
			//flag=1;
			if(k==n)
			{
			    flag=1;
				for(int j=1;j<=n;j++)
				{
					for(int p=1;p<=n;p++)
					{
						if(x[j]==p)
							cout<<"Q ";
						else
							cout<<"X ";
					}cout<<"\n";
				}cout<<"\n";
			}
			else
			flag+=nqueen(k+1,n);
		}
	}
	return flag;
	//if(flag==0)
}
int main()
{
	int n;
	cin>>n;
	cout<<nqueen(1,n);
}
