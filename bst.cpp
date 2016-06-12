#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *start=NULL,*root=NULL,*pre=NULL;
void insertbst(int n)
{
    node *t;
    t=new node;
    t->data=n;
    t->left=NULL;
    t->right=NULL;
    if(start==NULL)
        start=t;
    else
    {
        node *temp=start;
        while(temp!=NULL)
        {
        if(n>temp->data)
        {
            pre=temp;
            temp=temp->right;
        }
        else
        {
            pre=temp;
            temp=temp->left;
        }
    }
    if(n>pre->data)
        pre->right=t;
    else
        pre->left=t;
}
}
void levelsum(node* r)
{
    int s=0,l=0;
    queue<node*> q1;
    queue<node*> q2;
    q1.push(r);
    while(!q1.empty())
    {
        node *temp=q1.front();
        q1.pop();
        s+=temp->data;
        if(temp->left)
            q2.push(temp->left);
        if(temp->right)
            q2.push(temp->right);
        if(q1.empty())
        {
            cout<<"Level "<<l<<": "<<s<<endl;
            l++;
            swap(q1,q2);
            s=0;
        }
    }
}
int main()
{
    int a,n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insertbst(a);
    }
    levelsum(start);
    return 0;
}
