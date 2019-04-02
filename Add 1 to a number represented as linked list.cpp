/*
Add 1 to a number represented as linked list Submissions: 4217   Accuracy: 49.42%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
   
Problems
A number (n) is represented in Linked List such that each digit corresponds to a node in linked list. Add 1 to it.

Input:
You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.. There are multiple test cases. For each test case, this method will be called individually

Output:
Your function should return pointer to head of the modified list.

Constraints:
1 <=T<= 50
1 <=n<= 10000

Example:

Input:
4
456
123
999
1879

Output:
457 
124 
1000 
1880
 

*/

Node *addOne(Node *head)
{
   // Your Code here
   int n=0;
   Node *t=head;
   while(t)
   {
       n=n*10+t->data;
       t=t->next;
   }
   cout<<n+1;
   return NULL;
}

/*
// C++ program to add 1 to a linked list 
#include<bits/stdc++.h> 

/* Linked list node */
struct Node 
{ 
	int data; 
	Node* next; 
}; 

/* Function to create a new node with given data */
Node *newNode(int data) 
{ 
	Node *new_node = new Node; 
	new_node->data = data; 
	new_node->next = NULL; 
	return new_node; 
} 

/* Function to reverse the linked list */
Node *reverse(Node *head) 
{ 
	Node * prev = NULL; 
	Node * current = head; 
	Node * next; 
	while (current != NULL) 
	{ 
		next = current->next; 
		current->next = prev; 
		prev = current; 
		current = next; 
	} 
	return prev; 
} 

/* Adds one to a linked lists and return the head 
node of resultant list */
Node *addOneUtil(Node *head) 
{ 
	// res is head node of the resultant list 
	Node* res = head; 
	Node *temp, *prev = NULL; 

	int carry = 1, sum; 

	while (head != NULL) //while both lists exist 
	{ 
		// Calculate value of next digit in resultant list. 
		// The next digit is sum of following things 
		// (i) Carry 
		// (ii) Next digit of head list (if there is a 
		//	 next digit) 
		sum = carry + head->data; 

		// update carry for next calulation 
		carry = (sum >= 10)? 1 : 0; 

		// update sum if it is greater than 10 
		sum = sum % 10; 

		// Create a new node with sum as data 
		head->data = sum; 

		// Move head and second pointers to next nodes 
		temp = head; 
		head = head->next; 
	} 

	// if some carry is still there, add a new node to 
	// result list. 
	if (carry > 0) 
		temp->next = newNode(carry); 

	// return head of the resultant list 
	return res; 
} 

// This function mainly uses addOneUtil(). 
Node* addOne(Node *head) 
{ 
	// Reverse linked list 
	head = reverse(head); 

	// Add one from left to right of reversed 
	// list 
	head = addOneUtil(head); 

	// Reverse the modified list 
	return reverse(head); 
} 

// A utility function to print a linked list 
void printList(Node *node) 
{ 
	while (node != NULL) 
	{ 
		printf("%d", node->data); 
		node = node->next; 
	} 
	printf("\n"); 
} 

/* Driver program to test above function */
int main(void) 
{ 
	Node *head = newNode(1); 
	head->next = newNode(9); 
	head->next->next = newNode(9); 
	head->next->next->next = newNode(9); 

	printf("List is "); 
	printList(head); 

	head = addOne(head); 

	printf("\nResultant list is "); 
	printList(head); 

	return 0; 
} 

*/