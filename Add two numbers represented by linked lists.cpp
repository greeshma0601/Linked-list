/*Given two numbers represented by two lists, write a function that returns sum list. The sum list is list representation of addition of two input numbers.

Suppose you have two linked list 5->4 ( 4 5 )and 5->4->3( 3 4 5) you have to return  a resultant linked list 0->9->3 (3 9 0).*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
 struct Node* addTwoLists (struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_Node = newNode(new_data);
    new_Node->next = (*head_ref);
    (*head_ref)    = new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node *Node)
{
	struct Node* temp;
    while(Node != NULL)
    {   
        temp=Node;
        Node = Node->next;
        free(temp);
    } 
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* res = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
			cin>>x;
			push(&first, x);
	    }
         cin>>m;
	    for(i=0;i<m;i++)
	    {
			cin>>x;
	    push(&second, x);
	    }
		 res = addTwoLists(first, second);
	    printList(res);
if(first)
freeList(first);
if(second)
freeList(second);
//if(res)
//freeList(res);
   }
   return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*struct Node
{
    int data;
   Node* next;
}; */
//write a function returns the resultant linked list
/*Node*  addTwoLists(Node* first, Node* second){
  // Code here
}*/
Node*  addTwoLists(Node* first, Node* second){
    Node *res = NULL;
    Node *temp, *prev = NULL; 
    int carry = 0, sum; 
  
    while (first != NULL || second != NULL) //while both lists exist 
    { 
        sum = carry + (first? first->data: 0) + (second? second->data: 0); 
  
        // update carry for next calulation 
        carry = (sum >= 10)? 1 : 0; 
  
        // update sum if it is greater than 10 
        sum = sum % 10; 
  
        // Create a new node with sum as data 
        temp = newNode(sum); 
  
        // if this is the first node then set it as head of the resultant list 
        if(res == NULL) 
            res = temp; 
        else // If this is not the first node then connect it to the rest. 
            prev->next = temp; 
  
        // Set prev for next insertion 
        prev  = temp; 
  
        // Move first and second pointers to next nodes 
        if (first) first = first->next; 
        if (second) second = second->next; 
    } 
  
    if (carry > 0) 
      temp->next = newNode(carry); 
  
    // return head of the resultant list 
    return res; 
    
}
