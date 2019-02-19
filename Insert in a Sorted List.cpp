/*
Insert in a Sorted List Submissions: 9104   Accuracy: 35.72%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
     
Given a sorted singly linked list and a data, your task is to complete the function sortedInsert that inserts the data in the linked list in sorted way i.e. order of the list doesn't changes.

Input:
The function takes 2 arguments as input, reference pointer to the head of the sorted single linked list and an integer data value which is to be inserted in the list.
There are multiple test cases and for each test case the function will be called separately.

Output:
For each test output will be space separated integers denoting the values of the linked list.

Constraints:
1<=T<=100
0<=N<=100
-999<=A[]<=999
Example:
Input:
2
6
25 36 47 58 69 80
19
2
50 100
75
Output:
19 25 36 47 58 69 80
50 75 100

*/

void sortedInsert(struct node** head, int data)
{
    struct node*temp=new struct node;
    temp->data=data;
    temp->next=NULL;
    struct node*curr=(*head);
    struct node *prev=NULL;
    while(curr!=NULL && data>=curr->data)
    {
        prev=curr;
        curr=curr->next;
    }
    if(prev == NULL)
    {
        temp->next =(*head);
        (*head)=temp;
        return ;
    }
    prev->next=temp;
    temp->next=curr;
}
