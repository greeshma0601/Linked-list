/*
Insert in Middle of Linked List Submissions: 7731   Accuracy: 35.41%   Difficulty: Basic   Marks: 1
     
Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list.

Input:
First line of input contains number of testcases T. For each testcase, first line contains length of linked list N and next line contains N elements to be inserted into the linked list and the last line contains the element to be inserted to the middle.

Output:
For each testcase, there will be a single line of output containing the element of modified linked list.

User Task:
The task is to complete the function insertInMiddle() which takes head reference and element to be inserted as the arguments.

Constraints:
1 <= T <= 100
1 <= N <= 103

Example:
Input:
2
3
1 2 4
3
4
10 20 40 50
30

Output:
1 2 3 4
10 20 30 40 50

Explanation:
Testcase 1: The new element is inserted after the current middle element in the linked list.

*/
/*
Structure of the Node of the linked list is as
struct Node {
	int data;
	Node* next;
};
*/
// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
	int c=0;
	Node* t=head;
	while(t)
	{
	    t=t->next;
	    c++;
	}
	t=head;
if(c%2!=0){c=c/2+1;}
else{c=c/2;}
	Node *p;
	while(c--)
	{
	    p=t;
	    t=t->next;
	}
	p->next=temp;
	temp->next=t;
	return head;
}
