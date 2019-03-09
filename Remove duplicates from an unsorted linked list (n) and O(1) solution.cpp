/*O(n) and O(1)
Remove duplicates from an unsorted linked list
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
/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node *removeDuplicates(Node *root)
{
 // your code goes here
 unordered_set<int>s;
 Node *h=root;
 Node *cur=root;
 Node *prev=NULL;
 while(cur)
 {
     if(s.find(cur->data)!=s.end())
     {
         prev->next=cur->next;
         delete cur;
     }
     else
     {
         s.insert(cur->data);
         prev=cur;
     }
     cur=prev->next;
 }
 return h;
}
