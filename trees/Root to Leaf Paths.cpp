/*
Root to Leaf Paths Submissions: 9311   Accuracy: 43.55%   Difficulty: Easy   Marks: 2
        
Given a Binary Tree of size N, your task is to complete the function printPaths() that prints all the possible paths from root node to the all the leaf node's of the binary tree.

       1
    /     \
   2       3
  /  \    / \
 4    5  6   7
All possible paths:
1->2->4
1->2->5
1->3->6
1->3->7

Input:
The function takes a single argument as input, the reference pointer to the root of the binary tree. There will be multiple test cases (T) and for each test case the function will be called seperately.

Output:
The function should print all possible paths from root node to leaf node. The paths should start from root to leftmost leaf node and then should move towards right of the tree. After every path append a '#' symbol to the path. 

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1 3 #1 2 #
10 20 40 #10 20 60 #10 30 #
 

*/

void printpath(Node *root,vector<int> v)
{
    int j,k;
    if(!root)
        return;
    v.push_back(root->data);
    if(!root->left&&!root->right)
    {
        for(j=0;j<v.size();j++)
            cout<<v[j]<<" ";
            cout<<"#";
        return;
    }
    else
    {
        printpath(root->left,v);
        printpath(root->right,v);
    }
}
void printPaths(Node* root)
{
    int i,j,k;
    vector<int> v;
    if(!root)
        return;
    printpath(root,v);
    cout<<endl;
}





