/*
Sorted insert for circular linked list Submissions: 14239   Accuracy: 25.92%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
           
Given a sorted circular linked list, insert a newnode so that it remains a sorted circular linked list.

Input:

In this problem, method takes two argument: the address of the head of the linked list and the data which you have to insert. The function should not read any input from stdin/console.
The Node structure has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
Set the * head_ref to head of resultant linked list.

Note: If you use "Test" or "Expected Output Button" use below example format

Constraints:

1<=T<=100
0<=N<=200

Example:

Input:
2
3                           Size of Linked List
1 2 4                    Elements of Linked List
2                           Element to be inserted
4
1 4 7 9
5

Output:

1 2 2 4
1 4 5 7 9
*/

#include<bits/stdc++.h>
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
};
   void sortedInsert(struct Node**head_ref, int x);
/* function to insert a new_Node in a list in sorted way.
   Note that this function expects a pointer to head Node
   as this can modify the head of the input linked list */
/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;
  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("
");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
     scanf("%d",&arr);
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=arr;
    temp->next=NULL;
    start=temp;
    r=start;}
 for (i = 0; i<n-1; i++)
  {
   scanf("%d",&arr);
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = arr;
    temp->next=NULL;
     r->next=temp;
     r=r->next;
  }
  if(n>0)
  temp->next=start;
 // printList(start);
  scanf("%d",&x);
  sortedInsert(&start,x);
  printList(start);
  r=start;
  while(r!=start->next)
  {
      temp=start;
      start=start->next;
      free(temp);
  }
  free(start);
 }
  return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* structure for a node */
/*
struct Node
{
  int data;
  Node *next;
};
 */
 
 
 void sortedInsert(Node** head_ref, int x)
{
Node *temp=new Node();
temp->data=x;
temp->next=NULL;
Node *head=*head_ref;
Node *ptr=head;
Node *ptr2=NULL;
while(ptr->next!=head)
{
ptr=ptr->next;
}
ptr2=ptr;
ptr=*head_ref;
if(x<=head->data)
{
temp->next=*head_ref;
*head_ref=temp;
ptr2->next=*head_ref;
}

else
{
while(ptr->next!=*head_ref&&ptr->next->data<x)
{
    ptr=ptr->next;
}
temp->next=ptr->next;
ptr->next=temp;

}

}
/*void sortedInsert(Node** head_ref, int x)
{
   //Your code here
   struct Node *temp,*p;
   p=(*head_ref);
   int c=0;
   while(p->data <= x)
   {
       c++;
       temp=p;
       p=p->next;
   }
   
   struct Node *r=(struct Node*)malloc(sizeof(struct Node*));
   
   r->data=x;
   r->next=NULL;
   if(c == 0)
   {
        r->next=temp;
        (*head_ref)=r;
   }
   else
   {
   r->next=temp->next;
   temp->next=r;
   }
  
}*/
