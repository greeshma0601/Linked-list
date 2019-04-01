/*
Absolute List Sorting Submissions: 5643   Accuracy: 47.9%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes in Noida
       
Problems
Given a linked list L of N nodes, sorted in ascending order based on the absolute values of its data. Sort the linked list according to the actual values.
Ex: Input : 1 -> -2 -> -3 -> 4 -> -5 
      Output: -5 -> -3 -> -2 -> 1 -> 4

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case contains a positive integer N denoting the size of linked list. The second line of each test case contains N space separated integers denoting the values of N nodes.


Output
Corresponding to each test case, the expected output will be space separated values of the sorted linked list.


Constraints
1 <= T <= 100
0 <   N  <= 30
-100 <= L[i] <= 100

Examples 

Input
2
3
1 -3 -4
4
0 -2 3 -10


Output
-4  -3  1
-10 -2  0  3
*/

void sortList(Node** head)
{
    // Your Code Here
    vector<int>v;
    Node*t=(*head);
    while(t)
    {
        v.push_back(t->data);
        t=t->next;
    }
    sort(v.begin(),v.end());
    (*head)=NULL;
    for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
}

// To sort a linked list by actual values. 
// The list is assumed to be sorted by absolute 
// values. 
void sortList(Node** head) 
{ 
    // Initialize previous and current nodes 
    Node* prev = (*head); 
    Node* curr = (*head)->next; 
  
    // Traverse list 
    while (curr != NULL) 
    { 
        // If curr is smaller than prev, then 
        // it must be moved to head 
        if (curr->data < prev->data) 
        { 
            // Detach curr from linked list 
            prev->next = curr->next; 
  
            // Move current node to beginning 
            curr->next = (*head); 
            (*head) = curr; 
  
            // Update current 
            curr = prev; 
        } 
  
        // Nothing to do if current element 
        // is at right place 
        else
            prev = curr; 
  
        // Move current 
        curr = curr->next; 
    } 
} 
