/*
Level of a Node in Binary Tree Submissions: 4336   Accuracy: 57.14%   Difficulty: Easy   Marks: 2
     
Given a Binary Tree and a target key, your task is to complete the function getLevel() that returns the level of the key from the given binary tree.

           3
         /   \
        2     5
      /   \
     1     4
Key: 4
Level: 3  
Note: if no such key exsits then return 0.
Input:
The function takes 2 arguments as input, first the reference pointer to the root node of the binary tree and a integer value target. There will be multiple test cases and for each test the function will be called seperately.

Output:
For each test return the level of the target value from the binary tree.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
2
1 2 L 1 3 R
2
5
1 2 R 1 3 L 2 4 L 2 5 R 4 7 L
7
Ouput:
2
4
*/

int gl(Node *root,int target,int level)
{
    if(root == NULL)return 0;
    if(root->data == target)return level;
    int dl=gl(root->left,target,level+1);
    if(dl!=0)
    return dl;
    
    dl=gl(root->right,target,level+1);
    return dl;
}
int getLevel(struct Node *node, int target)
{
	//code here
	return gl(node,target,1);
}
