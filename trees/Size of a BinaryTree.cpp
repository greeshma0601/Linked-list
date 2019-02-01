/*Size of Binary Tree Submissions: 8728   Accuracy: 67.62%   Difficulty: Basic   Marks: 1
     
Given a binary tree, count number of nodes in it. For example, count of nodes in below tree is 4.

        1
     /      \
   10      39
  /
5
Your task is to complete the function getSize() which accepts root node of the tree, and returns the size.

Input:
The input line contains T, denoting the number of testcases. Each testcase contains two lines. The first line contains E, number of edges. The second line contains E+1 nodes of the binary tree separated by space. The left and right nodes of tree are referred as such 1 2 L 1 3 R i.e 2 is left of 1 and 3 is right of 1.

Output:
For each testcase in new line, print the number of nodes.

User Task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function getSize().

Constraints:
1 <= T <= 30
1 <= E <= 100
1 <= Data of a node <= 1000

Example:
Input:
2
2
1 2 L 1 3 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
3
5

Explanation:
Testcase 1: First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 2 and right child of 1 is 3*/
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Computes the number of nodes in a tree. */
int getSize(struct Node* node);
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout << getSize(root) << endl;
  }
  return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */
/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
    if(node == NULL)return 0;
    else return 1+getSize(node->left)+getSize(node->right);
   // Your code here
   /*static int c=0;
   if(node == NULL)return c;*/
   /*if(node)
   {
       if(node->left)
  {*/
 /*  getSize(node->left);
  //}
 /* if(node->right)
 { 
     getSize(node->right);//}
     //c=c+1;
   //}
   c++;
   return c;*/
}
