/*
Merge Lists Alternatingly Submissions: 3751   Accuracy: 38.53%   Difficulty: Easy   Marks: 2
     
Given two linked lists, your task is to complete the function mergeList() which insert's nodes of second list into first list at alternate positions of first list.

For example:
Input:
List1- 5->7->17->13->11
List2- 12->10->2->4->6
Output:
List1- 5->12->7->10->17->2->13->4->11->6
List2- (empty)
The nodes of second list should only be inserted when there are positions available.

For example:
Input:
List1- 1->2->3
List2- 4->5->6->7->8
Output:
List1- 1->4->2->5->3->6
List2- 7->8
Input:
The function takes 2 arguments as input, the reference pointer to the head of the two linked list's(head1 & head2).
There will be T test cases and for each test case the function will be called separately.

Output:
For each test case first print space separated vales of the first linked list, then in the next line print space separated values of the second linked list.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
2
9 10
6
5 4 3 2 1 6
5
99 88 77 66 55
5
55 44 33 22 11
Output:
10 6 9 1 
2 3 4 5 
55 11 66 22 77 33 88 44 99 55
*/


// Main function that inserts nodes of linked list q into p at  
// alternate positions. Since head of first list never changes  
// and head of second list  may change, we need single pointer 
// for first list and double pointer for second list. 
void merge(struct Node *p, struct Node **q) 
{ 
     struct Node *p_curr = p, *q_curr = *q; 
     struct Node *p_next, *q_next; 
  
     // While therre are avialable positions in p 
     while (p_curr != NULL && q_curr != NULL) 
     { 
         // Save next pointers 
         p_next = p_curr->next; 
         q_next = q_curr->next; 
  
         // Make q_curr as next of p_curr 
         q_curr->next = p_next;  // Change next pointer of q_curr 
         p_curr->next = q_curr;  // Change next pointer of p_curr 
  
         // Update current pointers for next iteration 
         p_curr = p_next; 
         q_curr = q_next; 
    } 
  
    *q = q_curr; // Update head pointer of second list 
} 
