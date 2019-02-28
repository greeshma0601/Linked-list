/*
Intersection Point in Y Shapped Linked Lists Submissions: 20358   Accuracy: 49.55%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
                      
There are two singly linked lists in a system. By some programming error the end node of one of the linked list got linked into the second list, forming a inverted Y shaped list. Write a program to get the point where two linked lists merge.

Y ShapedLinked List
Above diagram shows an example with two linked list having 15 as intersection point.
Expected time complexity is O(m + n) where m and n are lengths of two linked lists

Input:
You have to complete the method which takes two arguments as heads of two linked lists. 

Output:
The function should return data value of a node where two linked lists merge.  If linked list do not merge at any point, then it shoudl return -1.

Constraints:
1 <=T<= 50
1 <=N<= 100
1 <=value<= 1000

Example:
Input:
2
2 3 2
10 20
30 40 50
5 10
2 3 0
10 20
30 40 50
First line is number of test cases. Every test case has four lines. First line of every test case contains three numbers, x (number of nodes before merge point in 1st list), y(number of nodes before merge point in 11nd list) and z (number of nodes after merge point).  Next three lines contain x, y and z values.

Output:
5
-1
*/

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
#include <bits/stdc++.h>
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    if(!head1 || !head2)return -1;
    // Your Code Here unordered_set<node*> tempS ;
    unordered_set<Node* > ts;
    while(head1)
    {
        ts.insert(head1);
        head1=head1->next;
    }
    while(head2)
    {
        if(ts.find(head2) != ts.end())
        {
            return head2->data;
        }
        head2=head2->next;
        
    }
    return -1;
}/*
int intersectPoint(Node* head1, Node* head2)
{
    while(head1)
    {
        if((head1->next == head2->next) && (head1->data == head2->data))
    
        {
            return head1->data;
        }
       else{ head1=head1->next;
        head2=head2->next;}
    }
    return -1;
}
int intersectPoint(Node* head1, Node* head2){
Node *temp = head1;
while(temp){
temp->data = -1 * temp->data;
temp = temp->next;
}
temp = head2;
int ans = -1;
while(temp){
if(temp->data < 0){
ans = -temp->data;
break;
}
temp = temp->next;
}
return ans;
}*/
