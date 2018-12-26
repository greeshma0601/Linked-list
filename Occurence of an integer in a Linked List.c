/*Given a singly linked list and a key, count number of occurrences of given key in linked list. For example, if given linked list is 1->2->1->2->1->3->1 and given key is 1, then output should be 4.*/
#include<stdio.h>
#include<stdlib.h>
/* Link list node */
struct node
{
    int data;
    struct node* next;
}*head;
int count(struct node* head, int search_for);
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
/* Function to print linked list */
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
     value = count(head, k);
     printf("%d
",value);
     }
     return(0);
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Return the no. of times search_for data is there in a linked list.
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
int count(struct node* head, int search_for)
{
//add your code here
int i=0,c=0;
struct node* p=head;
int s=search_for;
while(p!=NULL)
{
    if((p->data)==s){c++;}
    else{}
    p=p->next;
}
return c;
}
