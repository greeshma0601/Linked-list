#include<stdio.h>
#include<stdlib.h>
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node *start = NULL;
void sortList(struct Node *head);
// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
/* Drier program to test above function*/
void insert(int n1)
{
    int n,value,i;
    //scanf("%d",&n);
    n=n1;
    struct Node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        
        if(i==0)
        {
            start=(struct Node *) malloc( sizeof(struct Node) );
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else
        {
            temp->next= (struct Node *) malloc( sizeof(struct Node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
int main()
{
    
    int n;
    
    int t;
    scanf("%d",&t);
    
    while (t--) {
        scanf("%d",&n);
        
        insert(n);
        sortList(start);
        printList(start);
    }
    
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void sortList(Node *head)
{
   //Add code here
   struct Node* temp=head;
  int c0,c1,c2;
  c0=c1=c2=0;
   while(temp!=NULL)
   {
       if(temp->data==0)
       c0++;
       else if(temp->data==1)
       c1++;
       else
       c2++;
       temp=temp->next;
   }
   temp=head;
  
       while(c0--)
       {
           temp->data=0;
           //c0--;
           temp=temp->next;
       }
       while(c1--)
       {
           temp->data=1;
          // c1--;
          temp=temp->next;
       }
       while(c2--)
       {
           temp->data=2;
          // c2--;
           temp=temp->next;
       }
       
   
   
   
  }
