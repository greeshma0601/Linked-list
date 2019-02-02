/*
Linked List Insertion
Given a key (or data) to be inserted into the linked list of size N. The task is to insert the element at head or tail of the linked list depending on the input just before it p. If p is 0, then insert the element at beginning else insert at end.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list N and next line contains 2*N integers, each element to be inserted into the list is preceded by a 0 or 1 which decide the place to be inserted.

Output:
For each testcase, there will be a single line of output which contains the linked list elements.

Constraints:
1 <= T <= 100
1 <= N <= 103

Example:
Input:
3
5
9 0 5 1 6 1 2 0 5 0
3
5 1 6 1 9 1
4
15 0 36 0 95 0 14 0

Output:
5 2 9 5 6
5 6 9
14 95 36 15

Explanation:
Testcase 1: After inserting the elements at required position, we have linked list as 5, 2, 9, 5, 6.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insertAtBegining(struct node** headRef, int newData);
void insertAtEnd(struct node** headRef, int newData);
void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<' ';
        node = node->next;
    }
    cout<<'
';
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, ch, tmp;
        struct node* head = NULL;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp>>ch;
            if(ch) insertAtEnd(&head, tmp);
            else insertAtBegining(&head, tmp);
        }
        printList(head);
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** head, int newData)
{
    // Code here
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node*));
    //p->next=head;
    p->data=newData;
    //if((*head) == NULL)return;
    /*else
    {*/
    p->next=(*head);
    (*head)=p;
    //free(p);
    return;
    //}
    
        
    }
// function appends the data at the end of the list
void insertAtEnd(struct node** head, int newData)
{
    // Code here
    struct node* p,*temp;
    temp=(*head);
    p=(struct node*)malloc(sizeof(struct node*));
    p->next=NULL;
    p->data=newData;
    if((*head) == NULL)
    {
        (*head)=p;
        return;
        
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
        /*free(p);
        free(temp);*/
        return;
    }
}
