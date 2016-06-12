#include <bits/stdc++.h>
using namespace std ;
int main()
{
    char st[100000];
    while(scanf("%s",st)==1)
    {
        for(int i=0;i<strlen(st);)
        {
            int cnt=0;
            char c=st[i];
            while(st[i]==c)
            {
                cnt++;
                i++;
            }
            if(cnt>3)
            {
                cout<<cnt<<"!"<<c;
            }
            else
            {
                while(cnt--)
                {
                    cout<<c;
                }
            }
        }
        cout<<"\n";
    }
}
