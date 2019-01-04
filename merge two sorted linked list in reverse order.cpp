#include<bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}
struct Node * mergeResult(struct Node *node1,struct Node *node2);
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;
        struct Node* headA=NULL;
        struct Node* tempA = headA;
        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);
            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }
        struct Node* headB=NULL;
        struct Node* tempB = headB;
        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);
            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        struct Node* result = mergeResult(headA,headB);
        print(result);
        cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
struct Node * mergeResult(Node *node1,Node *node2)
{
    Node* head=node1;
    Node *ans=node1;
    vector<int>v;
    while(node1!=NULL)
    {
        v.push_back(node1->data);
        if(node1->next==NULL)
        {
            node1->next=node2;
            break;
        }
        node1=node1->next;
    }
    while(node2!=NULL)
    {
        v.push_back(node2->data);
        node2=node2->next;
    }
  sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        head->data=v[i];
        head=head->next;
    }
    return ans;
}
