/*
Reorder List Submissions: 8728   Accuracy: 43.34%   Difficulty: Hard   Marks: 8
Associated Course(s):   Interview Preparation
            
Given a singly linked list: A0→A1→…→An-1→An,
reorder it to: A0→An→A1→An-1→A2→An-2→…

Given 1->2->3->4->5 its reorder is 1->5->2->4->3.

It is recommended do this in-place without altering the nodes' values.

Input:

In this problem, method takes one argument: Address of the head of the linked list. The function should not read any input from stdin/console.
The node structure has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:

Reorder it as explained above.

Constraints:

1<=T<=200
1<=N<=200

Example:

Input:

2
3
1 2 3
4
1 7 3 4

Output:

1 3 2
1 4 7 3

*/
/* Following is the Linked list node structure */
/*struct Node
{
    int data;
    Node* next;
};*/
void reorderList(Node* head) 
{
    // Your code here
    while(head->next!=NULL && head->next->next!=NULL)
    {
        Node*prev=head;
        Node *cur=head->next;
        while(cur->next!=NULL)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=NULL;
        Node *t=head->next;
        head->next=cur;
        cur->next=t;
        head=head->next->next;
    }
    
}
