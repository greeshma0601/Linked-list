/*
Remove duplicates from an unsorted linked list Submissions: 12503   Accuracy: 49.19%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
        
Remove duplicate element from an unsorted Linked List ..

Input:
You have to complete the method which takes 1 argument: the head of the  linked list  .You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return a pointer to a linked list with no duplicate element.

Constraints:
1 <=T<= 100
1 <= size of linked lists <= 50

Note: If you use "Test" or "Expected Output Button" use below example format.

Example:
Input
2
4
5 2 2 4
5
2 2 2 2 2

Output
5 2 4
2
*/

Node *removeDuplicates(Node *start)
{
 // your code goes here
  struct Node *ptr1, *ptr2, *dup; 
    ptr1 = start; 
  
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  
        /* Compare the picked element with rest 
           of the elements */
        while (ptr2->next != NULL) 
        { 
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) 
            { 
                /* sequence of steps is important here */
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
                delete(dup); 
            } 
            else /* This is tricky */
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
    return start;
}
