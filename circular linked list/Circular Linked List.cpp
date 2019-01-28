/*
Circular Linked List
Given a singly linked list, find if the linked list is circular or not.  A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle.   An empty linked list is considered as circular.

Note  that this problem is different from cycle detection problem, here all nodes have to be part of cycle.

Input:

 

You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return true if the given linked list is circular, else false.

Constraints:
1 <=T<= 50
1 <=N<= 100
1 <=value<= 1000

Example:
Input:
2
5 1      
1 2 3 4 5
6 0
2 4 6 7 5 1

 

Output:
1
0

 

*/


// C program to find n'th Node in linked list
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
/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);
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
        if (k==1 && n >= 1)
              tail->next = head;
    printf("%d
", isCircular(head));
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head == NULL)return true;
   struct Node* t;
   t=head;int f=0;
   while(t->next != head)
   {
       if((t->next) == NULL){return false;}
       else
       {
           f=1;
           t=t->next;
       }
   }
   if(f == 1 or t->next==head){return true;}
   else {return false;}
}
