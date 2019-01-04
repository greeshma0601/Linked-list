/*
Rearrange a linked list Submissions: 6517   Accuracy: 38.29%   Difficulty: Easy   Marks: 2
        
Given a singly linked list, rearrange it in a way that all odd position nodes are together and all even positions node are together,

Input: You have to complete the method which takes one argument: the head of the linked list. You should not read any input from stdin/console.. 
Note: There are multiple test cases, for each test case, this method will be called individually.

Output:  
Your function should return pointer to head of the modified list.

Constraints:
1 <=T<= 50
1 <=N<= 100
1 <=value<= 1000

Example:
Input:
2
4
1 2 3 4
5
1 2 3 4 5

Output:
1 3 2 4
1 3 5 2 4

*/
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
// A utility function to create a new node
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
// Rearranges given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head);
/* Driver program to test above function*/
int main()
{
    int T,i,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;
            if (head == NULL)
            {   head = temp = newNode(l); }
            else
            {  temp->next = newNode(l);
               temp = temp->next;
            }
        }
        head = rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("
");
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
Node *even,*odd,*evenstart;
evenstart=head->next;
odd=head;
even=odd->next;
while(even && even->next){
odd->next=even->next;
odd=odd->next;
even->next=odd->next;
even=even->next;
}
odd->next=evenstart;
return head;
}
