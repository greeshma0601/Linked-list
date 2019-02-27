/*
Merge Sort for Linked List Submissions: 4898   Accuracy: 57.69%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
                  
Given Pointer/Reference to the head of a linked list, task is to Sort the given linked list using Merge Sort.

You need to complete the function splitList() and mergeList(), which will be called by the function mergeSort().

void mergeSort(struct node** headRef)
{
    struct node* head = *headRef;
    struct node* a, b;
    if ((head == NULL) || (head->next == NULL))
       return NULL;
    splitList(head, &a, &b); 
    mergeSort(&a);
    mergeSort(&b);
    *headRef = mergeList(a, b);
}
The spliList() function takes three input, head of the linked list and references to two pointers that are initially null. The function changes these pointers so that will point to the two new splitted lists, left and right halves respectively. The function splits the linked list in to two halves just like in standard merge sort and store the two new head in pointer a and b respectively. As the name suggests function mergeList will merge two linked lists, as in standard merge sort and should head pointer to of the new merged list. 

Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

Input:
There will be multiple test cases, for each test case function mergeSort() will be called separately. The only input to the function is the pointer/reference to the head of the linked list.

Output:
For each test, print the sorted linked list.

Constraints:
1<=T<=100
1<=N<=105

Example:
Input:
2
5
3 5 2 4 1
3
9 15 0
Ouput:
1 2 3 4 5
0 9 15
*/
void splitList(struct node* source, struct node** frontRef, struct node** backRef)
{
// Code here
struct node *p,*q,*t;
p=q=source;
while(q && q->next) {
t=p;
q=q->next->next;
p=p->next;
}
if(q) {
*backRef = p->next;
p->next = NULL;
*frontRef = source;
}
else {
*backRef = t->next;
t->next = NULL;
*frontRef = source;
}
}
// merges two sorted list into one big list
struct node* mergeList(struct node* a, struct node* b)
{
// Code here
if(!a)
return b;
if(!b)
return a;
if(a->data>b->data) {
b->next = mergeList(a,b->next);
return b;
}
else {
a->next = mergeList(a->next,b);
return a;
}
}
