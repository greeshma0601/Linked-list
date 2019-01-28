/*
Reverse a Doubly Linked List
Given a doubly linked list, the task is to Reverse the list. It should be done in-place without altering the nodes' values.

In this function problem, the function reverse takes one argument: Address of the head of the linked list. The function should contain the logic to reverse the linked list.

The linked list node structure has 3 fields, a data part which stores the data, a next pointer which points to the next element of the linked list and a previous pointer which points to the previous node of the linked list. 

There are multiple test cases. For each test case, this function will be called individually.

Note:  The Input/Ouput format and Example given below is used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console, and should not print anything on stdout/console.

Input:
The first line contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of two lines. First line of each test case contains an integer N denoting the size of the linked list. Second line of each test case consists of 'N' space separated integers denoting the elements of the linked list.

Output:
Print the linked list in Reverse order.

Constraints:

1<=T<=200
1<=N<=200

Example:
Input:
2
3
2 4 5
4
1 4 6 8

Output:

5 4 2
8 6 4 1

*/

#include <stdio.h>
#include <stdlib.h>
 
/* a node of the doubly linked list */
struct node
{
  int data;
  struct node *next;
  struct node *prev;    
};
 struct node* newNode(struct node* head,int data){
	 struct node *p,*temp= (struct node*)malloc(sizeof(struct node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head; 
	 }
void reverse(struct node **head_ref);
void printList(struct node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
  printf("
");
} 
 int main()
{
  int t,x,n,i;
  scanf("%d",&t);
  while(t--)
  {
  /* Start with the empty list */
  struct node *temp,*head = NULL;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&x);
  head=newNode(head, x);
  }
  reverse(&head);  
  printList(head);
  while(head->next!=NULL)
  {
	  temp=head;
	  head=head->next;
	  free(temp);
	  }       
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* a node of the doubly linked list */
/*struct node
{
  int data;
  struct node *next;
  struct node *prev;    
};*/
void reverse(struct node **head_ref)
{
   // Your code goes here
   struct node* cur=(*head_ref);
   struct node* temp;
   if(cur == NULL)return ;
   else if(cur->next == NULL)return;
    while(cur != NULL)
       {
           temp=cur->prev;
           cur->prev=cur->next;
           cur->next=temp;
           cur=cur->prev;
       }
   temp=temp->prev;
   (*head_ref)=temp;
}
