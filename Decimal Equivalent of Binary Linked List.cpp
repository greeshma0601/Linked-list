/*
Decimal Equivalent of Binary Linked List Submissions: 7932   Accuracy: 23.17%   Difficulty: Easy   Marks: 2
        
Given a singly linked list of 0s and 1s find its decimal equivalent

   Input  : 0->0->0->1->1->0->0->1->0
   Output : 50
   
Decimal Value of an empty linked list is considered as 0.

Since the answer can be very large, answer modulo 1000000007 should be printed.

Input:
The task is to complete the method which takes one argument: the head of the linked list. The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return should decimal equivalent modulo 1000000007

Constraints:
1 <=T<= 200
0 <=N<= 100
Data of Node is either 0 or 1

Example:
Input:
2
3
0 1 1    
4
1 1 1 0

Output:
3
14

*/

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
#include<bits/stdc++.h>

/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */
/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
}; */
// Should return decimal equivalent modulo 1000000007 of binary linked list 
long long unsigned int decimalValue(Node *head)
{
   // Your Code Here
 //  long long unsigned int mod=1000000007;
 if(head == NULL)return 0;
   Node *t=head;
   Node *t1=head;
 long long unsigned  int c=0;
  
  long long unsigned  int r=0;
   while(t1!=NULL)
   {
      
       r=((2*r)+t1->data);
       r=r%MOD;
       t1=t1->next;
   }
   return r;
}
