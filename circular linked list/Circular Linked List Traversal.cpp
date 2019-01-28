/*
Circular Linked List Traversal
Given a circular linked list, your task is to complete the method printList() that prints the linked list.

Input:
The printList function takes a single argument as input the reference pointer to the head of the linked list.
There are multiple test cases and for each test the function will be called separately. 

Output:
For each test function, Circular Linked List should print the data elements. 

Constraints:
1<=T<=50
1<=N<=50

Example:
Input:
2
7
374 363 171 497 282 306 426
2
162 231
Output:
426 306 282 497 171 363 374
231 162

Note : Input items are inserted at the front of linked list that is why output is in reverse order.

*/

void printList(struct Node *head)
{
  // code here
    struct Node*temp;
    int c=0;
    temp=head;
    
    while(temp->next!=head)
    {
        //cout<<temp->data<<" ";
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    //printf("\n");
}
