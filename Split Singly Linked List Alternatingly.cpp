/*

Split Singly Linked List Alternatingly
Given a single linked list of size N, your task is to complete the function alternatingSplitList() that splits the given linked list into two smaller list. The sublists should be made from alternating elements from the original list.

Original linked List: 5 4 3 2 1 0
Resultant Linked List 'a' 5 3 1
Resultant Linked List 'b' 4 2 0
Note: the sublist should in the order with respect to original list. 
Input:
The function takes three inputs, reference pointer to the head of the original list (headRef) and two NULL reference pointer to the head of the two sublist's (aRef and bRef).
There will be multiple test cases and for each test thi function will be called seperately.

Output:
For each test case print the two sublists head1 and head2.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
0 1 0 1 0 1
5
2 5 8 9 6
Output:
0 0 0
1 1 1
2 8 6
5 9

*/
/*
structure of node is as
struct node
{
	int data;
	struct node* next;
};
*/
void alternatingSplitList(struct node* head, struct node** a, struct node** b)
{
    // Code here
    
    struct node* p=head;
    if(head==NULL)return;
    int n=1;
  while(head!=NULL)
  {
        if(n%2!=0)
        {
            
            append(a,head->data);
            
            
        }
        else
        {
            append(b,head->data);
            
        }
        n++;
        head=head->next;
  } 
    
}
