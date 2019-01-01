#include<bits/stdc++.h>
using namespace std;
struct Node
{
int val;
struct Node *next;
};
void push(struct Node **root,int data)
{
    Node *newnode=new Node();
    struct Node *prev;
    prev=*root;
    newnode->val=data;
    newnode->next=NULL;
    if(*root==NULL)
    {
        *root=newnode;
        return;
    }
    while(prev->next!=NULL)
        prev=prev->next;
    prev->next=newnode;
}
void print(struct Node *ptr)
{
    if(ptr==NULL)
    {
        cout<<"NO"<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void intersection(struct Node **head1,struct Node **head2,struct Node **head3);
int main()
{
    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
  cin>>n1>>n2;
    int k;
    for(int i=0;i<n1;i++)
    {
        cin>>k;
  push(&head1,k);
    }
    for(int i=0;i<n2;i++)
        {
            cin>>k;
            push(&head2,k);
         
        }
       
          intersection(&head1,&head2,&head3);
   print(head3);
  
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the Linked list Node is as follows:
struct Node {
    int val;
    struct Node* next;
}; */
void insert(Node **head,int data)
{
Node *q;
Node *newNode=(Node *)malloc(sizeof(Node *));
newNode->val=data;
newNode->next=NULL;
if(*head==NULL)
{
*head=newNode;
return;
}
q=*head;
while(q->next!=NULL)
q=q->next;
q->next=newNode;
}
void intersection(Node **head1, Node **head2,Node **head3)
{
// Your Code Here
Node *temp1=*head1,*temp2=*head2,*temp3=*head3;

while(temp1!=NULL && temp2!=NULL)
{
if(temp1->val == temp2->val)
{
insert(head3,temp1->val);
temp1=temp1->next;
temp2=temp2->next;
}
else if(temp1->val < temp2->val)
temp1=temp1->next;
else
temp2=temp2->next;
}
}
