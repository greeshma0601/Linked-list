/*
Delete a Node in Single Linked List Submissions: 26899   Accuracy: 35.88%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
     
Delete xth node from a single linked list. Your task is to complete the method deleteNode which takes two arguments:  the address of the head of the linked list and an integer x. The function returns the head of the  modified linked list.
 

Input:
The first line of input contains an element T, denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contains an integer N denoting the no of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

Output:
The output for each test case will be the space separated value of the returned linked list.

Constraints:
1<=T<=300
2<=N<=100
1<=x<=N

Example(To be used only for expected output):

Input:
2
3                       
1 3 4               
3                       
4
1 5 2 9                    
2

Output:
1 3           
1 2 9
*/

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head == NULL)return head;
    if(x==1)
    {
        struct Node* prev=head;
        prev=head;
        head=head->next;
        free(prev);
     return head;   
    }
    else{
        int c=1;
    struct Node* p=head;
    struct Node* prev=head;
    while( c!=x && p!=NULL)
    {
        c++;
        prev=p;
        p=p->next;
    }
    prev->next=p->next;
   // p->next=NULL;
    free(p);
   // free(prev);
    
    return head;

    }
    }
