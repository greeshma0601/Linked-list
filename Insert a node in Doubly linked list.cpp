/*
Insert a node in Doubly linked list
Given a doubly linked list, a position p and an integer x. The task  is to add a new node with value x at position just after pth node in the doubly linked list .

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains number of nodes in the linked list, and next line contains two integers p and x.

Output:
For each testcase, there will be a single line of output which prints the modified linked list.

User Task:
The task is to complete the function addNode() which head reference, position and data to be inserted as the arguments, with no return type.

Constraints:
1 <= T <= 200
1 <= N <= 103

Example:
Input:
2
3
2 4 5
2 6
4
1 2 3 4
0 44

Output:
2 4 5 6
1 44 2 3 4

Explanation:
Testcase 1: p = 2, and x = 6. So, 6 is inserted after p, i.e, at position 3 (0-based indexing).

*

/
/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */
/* Function to insert into a Doubly Linked List */
void addNode(struct Node **head_ref,int pos,int data)
{
//Your code here
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
struct Node *temp1=(*head_ref);
for(int i=1;i<=pos;i++)
{
if(temp1->next!=NULL)
temp1=temp1->next;
}
if(temp1->next==NULL)
{
temp->data=data;
temp->prev=temp1;
temp1->next=temp;
temp->next=NULL;
}
else
{
temp->data=data;
temp->prev=temp1;
temp->next=temp1->next;
temp1->next->prev=temp;
temp1->next=temp;
}
}
