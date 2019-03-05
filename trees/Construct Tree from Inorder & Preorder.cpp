/*
Construct Tree from Inorder & Preorder Submissions: 11040   Accuracy: 29.29%   Difficulty: Easy   Marks: 2
        
Given 2 Arrays of Inorder and preorder traversal. Construct a tree and print the Postorder traversal. 

Input:
First line consists of T test cases. First line of every test case consists of N , denoting the number of elements in array. Second and Third line of every test case consists of Inorder and preOrder traversal of a tree.

Output:
Single line output, return the Node of the tree.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
1
7
3 1 4 0 5 2 6 
0 1 3 4 2 5 6 
Output:
3 4 1 5 6 2 0

*/

#include<unordered_map>
/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int search(int arr[], int strt, int end, int value)
{
int i;
for(i = strt; i <= end; i++)
{
if(arr[i] == value)
return i;
}
}

Node* buildTree(int in[],int pre[], int l, int h)
{
if(l>h)
return NULL;
Node *temp=newNode(pre[preIndex++]);
if(l==h)
return temp;
int p=search(in,l,h,temp->data);
temp->left=buildTree(in,pre,l,p-1);
temp->right=buildTree(in,pre,p+1,h);
return temp;
}
