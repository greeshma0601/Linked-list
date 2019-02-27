/*
Delete N nodes after M nodes of a linked list Submissions: 12710   Accuracy: 37.19%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
          
Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.

Input:

Complete the method which takes three argument: the head of the linked list,M an N. Function should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.
 

Output:

Function should not print any output to stdin/console
 

Example:

M = 2, N = 2
Linked List: 1->2->3->4->5->6->7->8
After 2 nodes 2 nodes will be deleted.Deleted Nodes 3->4 and 7->8
Output: Linked List: 1->2->5->6

For Testing use this format:
1 (Test case)
8 (Number of elements in linked list)
2 1(M and N)
9 1 3 5 9 4 10 1 (8 Number)
output : 9 1 5 9 10 1 

 
*/
/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void linkdelete(struct node  *head, int M, int N)
{
//Add code here   
 struct node *curr = head, *t; 
    int count; 
  
    // The main loop that traverses through the whole list 
    while (curr) 
    { 
        // Skip M nodes 
        for (count = 1; count<M && curr!= NULL; count++) 
            curr = curr->next; 
  
        // If we reached end of list, then return 
        if (curr == NULL) 
            return; 
  
        // Start from next node and delete N nodes 
        t = curr->next; 
        for (count = 1; count<=N && t!= NULL; count++) 
        { 
            struct node *temp = t; 
            t = t->next; 
            free(temp); 
        } 
        curr->next = t; // Link the previous list with remaining nodes 
  
        // Set current pointer for next iteration 
        curr = t; 
    } 
}
