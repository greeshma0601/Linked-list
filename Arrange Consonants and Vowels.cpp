/*
Arrange Consonants and Vowels Submissions: 2359   Accuracy: 31.16%   Difficulty: Easy   Marks: 2
   
Problems
Given a singly linked list of size N containing only English Alphabets, your task is to complete the function arrangeC&V(), that arranges the consonants and vowel nodes of the list it in such a way that all the vowels nodes come before the consonants while maintaining the order of their arrival.
Examples:

Input : a -> b -> c -> e -> d -> o -> x -> i
Output : a -> e -> o -> i -> b -> c -> d -> x 
Input:
The function takes a single argument as input, the reference pointer to the head of the linked list.
There will be T test cases and for each test case the function will be called separately.


Output:
For each test case output a single line containing space separated elements of the list.


Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
6
a e g h i m
3
q r t
Output:
a e i g h m
q r t
*/

/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   //Code here
   Node*t=head;
   vector<char>v1,v2;
   while(t)
   {
       int d=t->data;
       if(d == 'a' || d == 'e' || d== 'i' || d=='o' || d== 'u')
       {
           v1.push_back(d);
       }
       else v2.push_back(d);
       t=t->next;
   }
   t=head;
   for(auto it=v1.begin();it!=v1.end();it++)
   {
       t->data=*it;
       t=t->next;
   }
    for(auto it=v2.begin();it!=v2.end();it++)
   {
       t->data=*it;
       t=t->next;
   }
   return head;
}
