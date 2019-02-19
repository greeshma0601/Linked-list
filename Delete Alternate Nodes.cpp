/*
Delete Alternate Nodes
Given a Singly Linked List of size N, your task is to complete the function deleteAlt(), which starting from the second node delete all alternate nodes of the list.

For example:

Input: 1->2->3->4->5
Output: 1->3->5

Input: 1->2->3->4
Output: 1->3
Input:
The function takes a single argument as input, the reference pointer to the head of the linked list.
There will be T test cases and for each test case the function will be called separately. 

Output:
For each test the output will be space separated values of the linked list.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
1 2 3 4 5 6
4
99 59 42 20
Output:
1 3 5
99 42

*/

/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    struct Node* cur=head,*p;
  
    while(cur!=NULL && cur->next!=NULL )
    {
       
       p=cur->next;
       cur->next=p->next;
       free(p);
       cur=cur->next;
    }
}

