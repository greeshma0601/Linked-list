/*Deletion and Reverse in Linked List Submissions: 2867   Accuracy: 51.28%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
          
Given a Circular Linked List of size N, your task is to delete the given node (excluding the first and last node) in circular linked list and then print the reverse of the circular linked list.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the circular linked list. The next line contains n space separated integers forming the circular linked list. The last line contains the node to be deleted in between the circular linked list.

Output:
Print the reverse of the circular linked list with the deleted node.

Constraints:
1<=T<=100
1<=n<=100
1<=data<=100

Example:
Input:
2
5
2 5 7 8 10
8
4
1 7 8 10
8

Output:
10 7 5 2 
10 7 1*/

void deleteNode(struct Node **head, int key)
{
// Your code goes here
Node *temp = (*head);
Node *prev = NULL;

if((*head) -> data == key){
*head = (*head) -> next;
return;
}

else{
while(temp -> data != key){
prev = temp;
temp = temp -> next;
}
prev -> next = temp -> next;
}
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
// Your code goes here


Node *temp = *head_ref, *prev =NULL, *n = NULL;

if(*head_ref == NULL)
return;
do{
n = temp -> next;
temp -> next = prev;
prev = temp;
temp = n;
} while(temp != (*head_ref) );

(*head_ref) -> next = prev;
*head_ref = prev;
}
