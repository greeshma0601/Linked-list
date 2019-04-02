/*
166

uintptr_t is an unsigned integer type that is capable of storing a pointer. Which typically means that it's the same size as a pointer.

It is optionally defined in C++11 and later standards.

A common reason to want an integer type that can hold an architecture's pointer type is to perform integer-specific operations on a pointer, or to obscure the type of a pointer by providing it as an integer "handle".
*/
/*
XOR Linked List
An ordinary Doubly Linked List requires space for two address fields to store the addresses of previous and next nodes. A memory efficient version of Doubly Linked List can be created using only one space for address field with every node. This memory efficient Doubly Linked List is called XOR Linked List or Memory Efficient as the list uses bit-wise XOR operation to save space for one address.
Given stream of data of size N for the linked list, your task is to complete the function insert() and printList(). The insert() function pushes (or inserts at beginning) the given data in the linked list and the printList() function prints the linked list first in forward direction and then in backward direction.
Note: There is an utility function XOR() that takes two Node pointer to get the bit-wise XOR of the two Node pointer. Use this function to get the XOR of the two pointers.

Input:
The insert function takes 2 arguments as input, first the reference pointer to the head of the linked list and an integer data to be inserted in the linked list.
The printList function takes a single argument as input the reference pointer to the head of the linked list.
There are multiple test cases and for each test the function will be called separately.

Output:
For each test function printList first should print the linked list in the forward direction and then in the backward direction.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
9 5 4 7 3 10
3
58 96 31

Output:
10 3 7 4 5 9
9 5 4 7 3 10
31 96 58
58 96 31
*/

void insert(struct Node **head_ref, int data)
{
    // Allocate memory for new node  
    Node *new_node = new Node();  
    new_node->data = data;  
  
    /* Since new node is being inserted at the  
    begining, npx of new node will always be  
    XOR of current head and NULL */
    new_node->npx = XOR(*head_ref, NULL);  
  
    /* If linked list is not empty, then npx of  
    current head node will be XOR of new node  
    and node next to current head */
    if (*head_ref != NULL)  
    {  
        // *(head_ref)->npx is XOR of NULL and next.  
        // So if we do XOR of it with NULL, we get next  
        Node* next = XOR((*head_ref)->npx, NULL);  
        (*head_ref)->npx = XOR(new_node, next);  
    }  
  
    // Change head  
    *head_ref = new_node;  
    
	// Code here
}
// function should prints the contents of doubly linked list
// first in forward direction and then in backward direction
// you should print a next line after printing in forward directionvoid printList (struct Node *head)

	// Code here
#include<bits/stdc++.h>
// function should prints the contents of doubly linked list
// first in forward direction and then in backward direction
// you should print a next line after printing in forward direction
void printList (struct Node *head)
{

    Node *curr = head;  
    Node *prev = NULL;  
    Node *next;  
  
    vector <int> v;
    while (curr != NULL)  
    {  
        // print current node  
        cout<<curr->data<<" ";  
  v.push_back(curr->data);
        // get address of next node: curr->npx is  
        // next^prev, so curr->npx^prev will be  
        // next^prev^prev which is next  
        next = XOR (prev, curr->npx);  
  
        // update prev and curr for next iteration  
        prev = curr;  
        curr = next;  
    }  
   cout<<endl;
   reverse(v.begin(),v.end());
for(auto it=v.begin();it!=v.end();it++)
cout<<*it<<" ";

}
