/*
Delete nodes having greater value on right Submissions: 13009   Accuracy: 37.92%   Difficulty: Medium   Marks: 4
        
Given a singly linked list, remove all the nodes which have a greater value on right side.

Input:
You have to complete the method which takes 1 argument: the head of the  linked list  .You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return a pointer to the linked list in which all nodes which have a greater value on right side are removed.

Constraints:
1<=T<=50
1<=size of linked list <=100
1<=element of linked list <=1000

Example:

Input:
3
8
12 15 10 11 5 6 2 3
6
10 20 30 40 50 60
6
60 50 40 30 20 10

Output:

15 11 6 3
60
60 50 40 30 20 10
*/
/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/

 Node* reverse(Node *head) 
    { 
        // Initialize current, previous and 
        // next pointers 
        Node *current = head; 
        Node *prev = NULL, *next = NULL; 
  
  
        while (current != NULL) 
        { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    } 

Node *compute(Node *head)
{
    head=reverse(head);
    
    Node *tmp=head->next,*p=head;
    int maxx=head->data; 
    while(tmp)
    {
        if(tmp->data < maxx)
        {
            p->next=tmp->next;
            tmp=tmp->next;
        }
        else
        {
            maxx=tmp->data;
            p=tmp;
            tmp=tmp->next;
        }
    }
    
    head=reverse(head);
    return head;
    
    
    
}
