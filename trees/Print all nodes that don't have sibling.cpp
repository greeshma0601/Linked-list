/*
Print all nodes that don't have sibling Submissions: 36869   Accuracy: 20.96%   Difficulty: Easy   Marks: 2
          
Given a Binary Tree your task is to print the nodes which dont have a sibling node .You are required to complete the function printSibling. You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Input: The first line of input contains T, denoting the number of testcases. For each testcase there will be 2 lines. The first line contains the number of edges. The second line contains nodes(number of edges  + 1) data. The task is to complete the function printSibling which takes 1 argument, root of the Tree. The struct node has a data part which stores the data, pointer to left child and pointer to right child. There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should print all the nodes separated by space which don't have sibling in the tree in sorted order if every node has a tree than print -1.

Note: The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 100
1 <=Data of a node<= 1000

Example:
Input
1
1
1 2 L

Output 
2

Explanation:
Testcase 1: In above example there is one  test case which represents a  tree with 2 nodes and 1 edge where root is 1, left child of 1 is 2 .

** For More Input/Output Examples Use 'Expected Output' option **

*/

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Prints the nodes having no siblings.  */


   
void  print(Node* node,vector<int>& v)
{   if(!node)
    return ;
      if(node->left && !(node->right))
          v.push_back(node->left->data);
     else if(!node->left && node->right)
          v.push_back(node->right->data);      
    print(node->left,v);
    print(node->right,v);
    return;
   /* sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";*/
   // Your code here
}    
    


void printSibling(Node* node)
{   if(!node)
    return;
    vector<int> v;
    print(node,v);
    if(!v.size())
    {cout<<"-1";
    return;
        
    }
   sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";
    
   // Your code here
}
