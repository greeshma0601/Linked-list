/*
Segregate even and odd nodes in a Linked List Submissions: 10079   Accuracy: 49.67%   Difficulty: Easy   Marks: 2
        
Given a Linked List of integers, write a function to modify the linked list such that all even numbers appear before all the odd numbers in the modified linked list. Also, keep the order of even and odd numbers same.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the number of elements in Linked List.
The second line of each test case contains N input,elements in Linked List.

Output:

Print the all even numbers then odd numbers in the modified Linked List.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ size of elements ≤ 1000

Example:

Input
3
7
17 15 8 9 2 4 6
4
1 3 5 7
7
8 12 10 5 4 1 6

Output
8 2 4 6 17 15 9
1 3 5 7
8 12 10 4 6 5 1

*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    struct node* head=NULL;
	    node* t=head;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        node *newn=new node;
	        newn->data=a;
	        newn->next=NULL;
	        if(head==NULL)
	        {
	            head=t=newn;
	        }
	        else
	        {
	            t->next=newn;
	            t=t->next;
	        }
	    }
	    node* odd=NULL;
	    node* t1=odd,*prev=NULL;
	    t=head;
	    while(t)
	    {
	        //cout<<t->data<<endl;
	        if(t->data%2==0)
	        {
	            prev=t;
	            t=t->next;
	        }
	        else
	        {
	            node *r=t->next;
	            t->next=NULL;
	            if(!odd)
	                odd=t1=t;
	            else
	            {
	                t1->next=t;
	                t1=t1->next;
	            }
	            if(!prev)
	                head=r;
	            else
	                prev->next=r;
	            t=r;
	        }
	    }
	    if(prev)
    	    prev->next=odd;
    	else
    	    head=odd;
	    t=head;
	    while(t)
	    {   
	        cout<<t->data<<" ";
	        t=t->next;
	    }
	    cout<<endl;
	}
	return 0;
}
