/*
Multiply two linked lists Submissions: 7606   Accuracy: 22.23%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
        
Problems
The task is to complete the function  multiplyTwoLists which multiplies two linked lists l1 and l2 and returns their product . The function takes two linked list l1, l2 as its arguments. 

Note: The output could be large take modulo 10^9+7.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer n denoting the size of the first linked list (l1)  In the next  line are the space separated values of the first linked list. The third line of each test case contains an integer m denoting the size of the second linked list (l2). In the forth line are space separated values of the second linked list .

Output:
For each test case output will be an integer denoting the product of the two linked list.

Constraints:
1<=T<=100
1<=n,m<=100

Example(To be used only for expected output):
Input
2
2
3 2
1
2
3
1 0 0
2
1 0 
Output
64
1000
*/
/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/
/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long int n=1000000007;
  long long int n1=0,n2=0;
  Node*t1=l1,*t2=l2;
  while(t1)
  {
      n1=((n1%n)*10)%n+t1->data;
      t1=t1->next;
  }
  while(t2)
  {
      n2=((n2%n)*10)%n+t2->data;
      t2=t2->next;
  }
  return (((n1%1000000007)*(n2%1000000007))%1000000007);
  
}
