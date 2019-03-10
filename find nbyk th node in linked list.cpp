/*
Find n/k th node in Linked list Submissions: 5717   Accuracy: 28.32%   Difficulty: Basic   Marks: 1
     
Given a singly linked list and a number k, write a function to find the (n/k)-th element, where n is the number of elements in the list. We need to consider ceil value in case of decimals.

Input:

The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of an integer n. The second line consists of n spaced integers.The last line consists of an integer k. 

Output:
Print the data value of (n/k)th node in the Linked List.

Constraints: 
1<=T<=100
1<=n<=100

Example:
Input:
2
6
1 2 3 4 5 6
2
5
2 7 9 3 5
3

Output:
3
7

*/
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the node is
struct node
{
    int data;
    struct node *next;
};*/
int fractional_node(struct node *head, int k)
{
// your code here
int n=0,c;
node *t=head;

while(t!=NULL)
{
    n++;
    t=t->next;
}
if(n%k == 0)
c=n/k;
else
c=n/k+1;
node*temp=head;
c--;
while(c--)
{
    temp=temp->next;
}
return temp->data;
}
