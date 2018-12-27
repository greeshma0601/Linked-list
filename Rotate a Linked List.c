/*Input:
1
8
1 2 3 4 5 6 7 8
4

Output:
5 6 7 8 1 2 3 4*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("
");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     rotate(&head,k);
     printList(head);
     }
     return(0);
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  A Linked List node has following structure.
  struct node
  {
     int data;
     struct node *next;
  }
*/
/*  **head_ref is a pointer to head pointer.  This function
    should modify value at head_ref to change head (if required)*/

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  A Linked List node has following structure.
  struct node
  {
     int data;
     struct node *next;
  }
*/
/*  **head_ref is a pointer to head pointer.  This function
    should modify value at head_ref to change head (if required)*/
void rotate(struct node **head_ref, int k)
{
   struct node *p,*q,*newhead,*temp,*n;
   int l=1; 
    p=(*head_ref);
   n=(*head_ref);
while(n->next!=NULL)
{n=n->next;
l++;}
if(k==l)
{return;}
 //  p=(*head_ref);
   int c=1;
   while(p!=NULL)
   {
       if(c==k)
       {break;}
       p=p->next;
       c++;
   }
   temp=p->next;
   newhead=temp;
   p->next=NULL;
   
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp->next=(*head_ref);
   (*head_ref)=newhead;
   /*
	p = start;
	while(p->data!= r)   //search the node
	{
		p = p->next;	
	}
	
	temp = p->next;
	new_start = temp;
	p->next = NULL;  // make p as last node of new rotated linked list
	
	while(temp->next!=NULL) // go to the last node of original linked list
	{
		temp = temp->next;		
	}
	
	temp->next = start; // connect last node of original linked list to first node
		
	printf("\n Rotated List = ");
	p = new_start;*/
}
