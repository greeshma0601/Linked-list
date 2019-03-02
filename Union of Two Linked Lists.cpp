/*
Union of Two Linked Lists
Given two linked lists, your task is to complete the function makeUnion, that returns the union of two linked lists. This union should include all the distinct elements only.

Input:
The function takes 2 arguments, reference pointer to the head of the first linked list (head1) and reference pointer to the head of the second linked list (head2). 
There are multiple test cases and for each test case this function will be called separately.

Output:
The function should return reference pointer to the head of the new list that is formed by the union of the two the lists. 
Note: The new list formed should be in non-decreasing order.

Constraints:
1<=T<=100
1<=N<=103

Example:
Input:
1
6
9 6 4 2 3 8
5
1 2 8 6 2
Output:
1 2 3 4 6 8 9

*/
/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
struct node* makeUnion(struct node* head1, struct node* head2)
{
    if(!head1 || !head2)return NULL;
    set<int>s;
    while(head1)
    {
        s.insert(head1->data);
        head1=head1->next;
    }
    while(head2)
    {
        s.insert(head2->data);
        head2=head2->next;
    }
    set<int>:: iterator it;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return NULL;
    
    
    
    
    
    
}
