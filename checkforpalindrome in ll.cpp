/*Given a singly linked list of integers, Your task is to complete the function isPalindrome that returns true if the given list is palindrome, else returns false.*/

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
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */


Node *reverse(Node *head)   //reverse the string (second part)
{
Node *p , *q;
if(head == NULL)
return head;
p = head;
q = p->next;
if(q == NULL)
return p;
q = reverse(q);
p->next->next = p;
p->next = NULL;
return q;
}

bool isPalindrome(Node *start)
{
	Node *p , *q ,*first_start,*second_start;
	p = start;
	q = start;
	
	if(p->next == NULL)          // if there is only one character in the string
	{
		return true;
	}
	//split the linked list
	while(1)
	{
		p = p->next->next;
		if(p == NULL)
		{
			second_start = q->next;
			break;
		}
		if(p->next == NULL)
		{
			second_start = q->next->next;
			break;
		}		
		q = q->next;		
	}	
	q->next = NULL;
	//reverse the second linked list
	second_start = reverse(second_start);	
//	printf(" \n second start  =  %d",second_start->data);	
	//now compare the splitted two linked lists
	first_start = start;
		
	while(first_start!=NULL && second_start!=NULL) //compare the two strings
	{		
		if(first_start->data == second_start->data)
		{
			first_start = first_start->next;
			second_start = second_start->next;
		}
		else
		{
		//	printf("\n Not a Palindrome");
			return false;					
		}		
	}	
	//printf("It is a palindrome");

    return true;
}
