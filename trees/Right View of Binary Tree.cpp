/*Right View of Binary Tree Submissions: 10211   Accuracy: 52%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
                
Given a Binary Tree, print Right view of it. Right view of a Binary Tree is set of nodes visible when tree is visited from Right side.

Right view of following tree is 1 3 7 8

          1
       /     \
     2        3
   /   \      /    \
  4     5   6    7
    \
     8

            

Input:
The task is to complete the method which takes one argument, root of Binary Tree. The struct Node has a data part which stores the data, pointer to left child and pointer to right child.
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should print nodes in right view of Binary Tree.

Constraints:
1 <=T<= 30
1 <= Number of nodes<= 100
1 <= Data of a node<= 1000

Example:
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1 2
10 30 60

There are two test casess.  First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2.   Second test case represents a tree with 4 edges and 5 nodes.

 */


void rightviewprint(Node *root,int level,int *maxlevel)
{
    if(root == NULL)return;
    if(*maxlevel < level)
    {
        cout<<root->data<<" ";
        *maxlevel=level;
    }
    rightviewprint(root->right,level+1,maxlevel);
    rightviewprint(root->left,level+1,maxlevel);
    
    
}
void rightView(Node *root)
{
   // Your code here
   int maxlevel=0;
   rightviewprint(root,1,&maxlevel);
}
