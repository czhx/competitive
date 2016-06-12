#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[120];
    while(scanf("%s",&st)!=EOF)
    {
        int l=strlen(st);
        if(l==1)
        {
            if(islower(st[0]))
                cout<<st[0]<<endl;
            else
                cout<<"Error!\n";
        }
        else
        {
            int flag=0;
            if(st[0]=='_'||st[l-1]=='_'||isupper(st[0]))
            {
                cout<<"Error!\n";
                break;
            }
            for(int i=0;i<l-1;i++)
            {
                if(st[i]=='_'&&st[i+1]=='_')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                {
                    cout<<"Error!\n";
                    break;
                }
            for(int i=0;i<l-1;i++)
            {
                if(st[i]=='_'&&isupper(st[i+1]))
                    flag=1;
            }

        }
    }
}
