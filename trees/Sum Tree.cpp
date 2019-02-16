/*
Sum Tree Submissions: 30491   Accuracy: 33.33%   Difficulty: Easy   Marks: 2
            
Write a function that returns true if the given Binary Tree is SumTree else false. A SumTree is a Binary Tree where value of every node x is equal to sum of nodes present in its left subtree and right subtree of x. An empty tree is SumTree and sum of an empty tree can be considered as 0. A leaf node is also considered as SumTree.

Following is an example of SumTree.

          26
        /    \
      10      3
    /   \   /   \ 
   4     6  1    2
 

Input:

The task is to complete the method which takes one argument, root of Binary Tree. There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return true if passed tree is Sum Tree, else false

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 1000
1 <=Data of a node<= 1000

Example:
Input:
2
2
3 1 L 3 2 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1
0

There are two test cases.  First case represents a tree with 3 nodes and 2 edges where root is 3, left child of 3 is 1 and right child of 3 is 2.   Second test case represents a tree with 4 edges and 5 nodes.
*/

int sum(struct Node *root) 
{ 
   if(root == NULL) 
     return 0; 
   return sum(root->left) + root->data + sum(root->right); 
} 
bool isSumTree(struct Node* node) 
{ 
    int ls, rs; 
  
    /* If node is NULL or it's a leaf node then 
       return true */
    if(node == NULL || 
            (node->left == NULL && node->right == NULL)) 
        return 1; 
  
   /* Get sum of nodes in left and right subtrees */
   ls = sum(node->left); 
   rs = sum(node->right); 
  
   /* if the node and both of its children satisfy the 
       property return 1 else 0*/
    if((node->data == ls + rs)&& 
            isSumTree(node->left) && 
            isSumTree(node->right)) 
        return 1; 
  
   return 0; 
} 
