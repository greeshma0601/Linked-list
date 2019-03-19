/*
Count Pairs whose sum is equal to X
Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X. 
Input:
The function takes three arguments as input, reference pointer to the head of the two linked list (head1 and head2), and an variable X.
There will be T test cases and for each test case the function will be called separately.
Output:
For each test case the function should return the count of all the pairs from both lists whose sum is equal to the given value X. 
Constraints:
1<=T<=100
1<=N1,N2<=1000
1<=X<=10000
Example:
Input:
2
6
1 2 3 4 5 6
3
11 12 13
15
4
7 5 1 3
4
3 5 2 8
10
Output:
3
2

*/

/*
Structure of the node of the linked list is as
struct Node
{
   int data;
   struct Node* next;
};
*/
// your task is to complete this function 
int countPairs(struct Node* h1, struct Node* h2,	int x)
{
      //Code here
      Node*t=h1;int c=0;Node *t1=h2;
      unordered_set<int>s;
      while(t)
      {
          s.insert(t->data);
          t=t->next;
      }
      while(t1)
      {
          if(s.find(x-t1->data)!=s.end())
          c++;
          t1=t1->next;
      }
      return c;
}
