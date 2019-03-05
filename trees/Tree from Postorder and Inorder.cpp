/*
Tree from Postorder and Inorder Submissions: 7004   Accuracy: 41.88%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
          
Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively. The task is to construct the binary tree from these traversals.

For example, if given inorder and postorder traversals are {4, 8, 2, 5, 1, 6, 3, 7} and {8, 4, 5, 2, 6, 7, 3, 1}  respectively, then your function should construct below tree.

          1
       /      \
     2        3
   /    \     /   \
  4     5   6    7
    \
      8

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains number of nodes in the tree, and next two lines contains inorder and postorder respectively.

Output Format:
For each testcase, print the preorder traversal of tree.

Your Task:
Complete the function buildTree() which inorder, postorder and number of nodes in the tree, and returns the root of the tree.

Constraints:
1 <= T <= 30
1 <= N <= 103
1 <= in[i], post[i] <= 103

Example:
Input:
1
8
4 8 2 5 1 6 3 7
8 4 5 2 6 7 3 1

Output:
1 2 4 8 5 3 6 7
*/

/* Tree node structure
struct Node 
{
   int data;
   Node *left, *right;
}*/
// Function should construct tree and return
// root of it.  in[] stores inorder traversal
// post[] stores postorder traversal.  n is
// size of these arrays
/* Tree node structure
struct Node 
{
   int data;
   Node *left, *right;
}*/

// Function should construct tree and return
// root of it.  in[] stores inorder traversal
// post[] stores postorder traversal.  n is
// size of these arrays
int search(int *arr,int start,int end,int target)
{
    for(int i=start;i<=end;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}
Node* buildTree(int *inorder,int *postorder,int start,int end,int* preIndex)
{
    if(start>end)
        return NULL;
        
    int target = postorder[(*preIndex)--];
    int inIndex = search(inorder,start,end,target);
    
    struct Node* temp = new Node();
    temp->data = inorder[inIndex];
    temp->right = buildTree(inorder,postorder,inIndex+1,end,preIndex);
    temp->left = buildTree(inorder,postorder,start,inIndex-1,preIndex);
    return temp;
    
}
Node *buildTree(int in[], int post[], int n)
{
    // Your code here
    int preIndex = n-1;
    buildTree(in,post,0,n-1,&preIndex);
}
