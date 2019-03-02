/*

Maximum path sum Submissions: 9316   Accuracy: 50.97%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
              
Given a binary tree in which each node element contains a number. Find the maximum possible sum from one leaf node to another.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting number of nodes. Second line of every test case consists of N Spaced 3 elements, Parent node data, child node data and position of child node( 'L'  or  'R' ).

Output:
Return the Maximum possible sum.

Constraints:
1<=T<=100
1<=N<=30

Example:
Input:
1
13
-15 5 L -15 6 R 5 -8 L 5 1 R -8 2 L -8 -3 R 6 3 L 6 9 R 9 0 R 0 4 L 0 -1 R -1 10 L
Output:
27
*/


int findMaxUtil(Node* root, int &res) 
{ 
    //Base Case 
    if (root == NULL) 
        return 0; 
  
    // l and r store maximum path sum going through left and 
    // right child of root respectively 
    int l = findMaxUtil(root->left,res); 
    int r = findMaxUtil(root->right,res); 
  
    // Max path for parent call of root. This path must 
    // include at-most one child of root 
    int max_single = max(max(l, r) + root->data, root->data); 
  
    // Max Top represents the sum when the Node under 
    // consideration is the root of the maxsum path and no 
    // ancestors of root are there in max sum path 
    int max_top = max(max_single, l + r + root->data); 
  
    res = max(res, max_top); // Store the Maximum Result. 
  
    return max_single; 
} 
  
// Returns maximum path sum in tree with given root 
int maxPathSum(struct Node *root) 
{ 
    // Initialize result 
    int res = INT_MIN; 
  
    // Compute and return result 
    findMaxUtil(root, res); 
    return res; 
} 
