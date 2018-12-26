/*Given a linked list, the task is to find the n'th node from the end.  It is needed to complete a method that takes two argument, head of linked list and an integer n. There are multiple test cases. For each test case, this method will be called individually.
Input:
2
9 2
1 2 3 4 5 6 7 8 9
4 5
10 5 100 5 1
 

Output:
8
-1*/
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    printf("%d
", getNthFromLast(head, k));
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
     struct  Node *p=head;
int c=0;
while(p!=NULL)
{
    c++;
    p=p->next;
}
//cout<<c;
int len=c-n+1;
//cout<<len<<endl;
struct Node *pq=head;
if(len<=0){return -1;}
else{
     int i=1;
  
  
  while(i<len)
  {
      pq=pq->next;
      i++;
  }
  int x=pq->data;
  return x;
}
}
