/*
Delete keys in a Linked list Submissions: 10579   Accuracy: 48.44%   Difficulty: Medium   Marks: 4
          
Given a single linked list and an integer x your task is to complete the function deleteAllOccurances  which deletes all occurences of a key x present in the linked list. The function takes two arguments: the head of the linked list and an integer x. The function should return the head of the modified linked list.
 

Input:
The first line of input contains an element T, denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contains an integer N denoting the no of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

Output:
The output for each test case will be the space separated value of the returned linked list.

Constraints:
1<=T<=300
1<=N<=100
1<=x<=N

Example(To be used only for expected output):

Input:
2
5
2 2 1 4 4
4
6
1 2 2 3 2 3
2

Output:
2 2 1
1 3 3

*/


/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head,int x)
{
    //Your code here
    Node *prev,*cur;
    prev == NULL;
    cur=head;
    while(cur!=NULL)
    {
        if(cur->data == x)
        {
            if(prev == NULL)
            {
                prev=cur;
                cur=cur->next;
                free(prev);
                prev=NULL;
                head=cur;
            }
            else
            {
                prev->next=cur->next;
                 free(cur);
                cur=prev->next;
               
            }
        }
        else{
            prev=cur;
            cur=cur->next;
        }
    }
return head;

  /*  while(head)
    {
        if(head->data!=x)
        cout<<head->data<<" ";
        head=head->next;
    }
    return NULL;
    */
    

}
