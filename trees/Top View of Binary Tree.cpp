/*
Top View of Binary Tree Submissions: 15112   Accuracy: 32.3%   Difficulty: Medium   Marks: 4
               
Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. You are required to complete the function topView, which should print the top view of the given binary tree.

       1
    /     \
   2       3
  /  \    / \
 4    5  6   7
Top view of the above binary tree is
4 2 1 3 7

Note: For the problem the printing should be level wise, i.e. starting node should be root.

Input:
The first line of the input contains a single integer T denoting the number of test cases. For each test a root node is given to the topView function. The only input to the function is the root of the binary Tree.

Output:
For each test case output in a single line, top view of the binary tree.

Constraints:
1<=T<=100
1<=N<=50

Example:
Input:
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L

Output:
1 2 3
10 20 30 40
 

Explanation:
Test case 1:

           1

        /     \

      2        3

For the above test case the top view is: 1 2 3

Test case 2:

            10

         /        \

     20          30

   /      \       /

40      60 90

TopView is: 10 20 30 40
*/

//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    // Your code here
    if(root == NULL)
    return;
    unordered_map<int,int>m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int>p=q.front();
        q.pop();
        Node *n=p.first;
        int val=p.second;
        if(m.find(val) == m.end())
        {
            m[val]=n->data;
            cout<<n->data<<" ";
        }
        if(n->left)
        q.push(make_pair(n->left,val-1));
        if(n->right)
        q.push(make_pair(n->right,val+1));
    }
}
