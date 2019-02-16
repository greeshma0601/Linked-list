/*
Ancestors in Binary Tree Submissions: 9990   Accuracy: 32.78%   Difficulty: Easy   Marks: 2
     
Given a Binary Tree and a target key, your task is to complete the function printAncestors() that prints all the ancestors of the key in the given binary tree.

              1
            /   \
          2      3
        /  \
      4     5
     /
    7
Key: 7
Ancestor: 4 2 1
Input:
The function takes 2 arguments as input, first the reference pointer to the root node of the binary tree and a integer value target. There will be multiple test cases and for each test the function will be called seperately.
Output:
For each test print all the ancestors of the target vlue in the order of their hierarchy.
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
1
4 2 1

*/
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
// Function should print all the ancestor of the target node
bool pa(Node* root,int target)
{
     if(root == NULL)return false;
      if(root->data == target)return true;
      if(pa(root->left,target) || pa(root->right,target))
      {
          cout<<root->data<<" ";
          return true;
      }
      return false;
}
bool printAncestors(struct Node *root, int target)
{
     // Code here
     //if(root == NULL) return false;
    bool a=pa(root,target);
cout<<endl;
return a;
   // return pa(root,target) && cout<<endl;
}
