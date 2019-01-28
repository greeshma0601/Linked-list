/*
Split a Circular Linked List into two halves Submissions: 4871   Accuracy: 48.38%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
         
Given a Cirular Linked List split it into two halves circular lists. If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, first list should have one node more than the second list. The resultant lists should also be circular lists and not linear lists.

Input:

You have to complete the method which takes 3 argument: The address of the head of the linked list , addresses of the head of the first and second halved resultant lists.. You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output:

Set the *head1_ref and *head2_ref to first resultant list and second resultant list respectively.


Constraints:

1<=T<=100
2<=N<=100


Example:

Input:
2
3
1 5 7
4
2 6 1 5

Output:
1 5
7
2 6
1 5

*/


void splitList(struct Node *head, struct Node **head1_ref,   
                                          struct Node **head2_ref)
{
    if(head==NULL) return;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=head && fast->next->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    *head2_ref=slow->next;
    slow->next=head;
    *head1_ref=head;
    if(fast->next==head)
        fast->next=*head2_ref;
    else
        fast->next->next=*head2_ref;
}
