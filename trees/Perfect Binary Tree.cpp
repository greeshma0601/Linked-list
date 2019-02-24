/*
Perfect Binary Tree Submissions: 1252   Accuracy: 53.7%   Difficulty: Easy   Marks: 2
     
Given a Binary Tree, write a function to check whether the given Binary Tree is a prefect Binary Tree or not. A Binary tree is Perfect Binary Tree in which all internal nodes have two children and all leaves are at same level.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the number of edges of the tree. The next line contains the edges of the tree.
 
Output:
Print "Yes" (without quotes) if the binary tree is perfect binary tree.
Print "No" (without quotes) if the binary tree is not a perfect binary tree.

Constraints:
1<=T<=10^5
1<=N<=10^5
1<=data of node<=10^5

Example:
Input:
3
6
10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
2
18 15 L 18 30 R
5
1 2 L 2 4 R 1 3 R 3 5 L 3 6 R

Output: 
Yes
Yes
No
*/
/* This function tests if a binary tree is perfect 
   or not. It basically checks for two things : 
   1) All leaves are at same level 
   2) All internal nodes have two children */
bool isPerfectRec(struct Node* root, int d, int level = 0) 
{ 
    // An empty tree is perfect 
    if (root == NULL) 
        return true; 
  
    // If leaf node, then its depth must be same as 
    // depth of all other leaves. 
    if (root->left == NULL && root->right == NULL) 
        return (d == level+1); 
  
    // If internal node and one child is empty 
    if (root->left == NULL || root->right == NULL) 
        return false; 
  
    // Left and right subtrees must be perfect. 
    return isPerfectRec(root->left, d, level+1) && 
           isPerfectRec(root->right, d, level+1); 
} 
  
