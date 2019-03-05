Boundary Traversal of binary tree Submissions: 25496   Accuracy: 26.78%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
                
Write a function to print Boundary Traversal of a binary tree. Boundary Traversal of a binary tree here means that you have to print boundary nodes of the binary tree Anti-Clockwise starting from the root.
Note: Boundary node means nodes present at boundary of leftSubtree and nodes present at rightSubtree also including leaf nodes.
For below tree, function should print 20 8 4 10 14 25 22 .
    
                         
 

 

 

 

 

 

 

 

 




 

 

 

 

Input:
The input contains T, denoting the number of testcases. The task is to complete the method which takes one argument, root of the tree. The struct node has a data part which stores the data, pointer to left child and pointer to right child. There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should print Boundary traversal of the tree.

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 100
1 <=Data of a node<= 1000

Example:
Input:
2
2
1 2 R 1 3 L
7
20 8 L 20 22 R 8 4 L 8 12 R 12 10 L 12 14 R 22 25 R

Output:
1 3 2
20 8 4 10 14 25 22 .

Explanation:
Testcase 1:


The first testcase represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2. And boundary traversal of this tree prints nodes as 1 3 2.

// A simple function to print leaf nodes of a binary tree 
void printLeaves(struct Node* root) 
{ 
    if (root) { 
        printLeaves(root->left); 
  
        // Print it if it is a leaf node 
        if (!(root->left) && !(root->right)) 
            printf("%d ", root->data); 
  
        printLeaves(root->right); 
    } 
} 
  
// A function to print all left boundry nodes, except a leaf node. 
// Print the nodes in TOP DOWN manner 
void printBoundaryLeft(struct Node* root) 
{ 
    if (root) { 
        if (root->left) { 
            // to ensure top down order, print the node 
            // before calling itself for left subtree 
            printf("%d ", root->data); 
            printBoundaryLeft(root->left); 
        } 
        else if (root->right) { 
            printf("%d ", root->data); 
            printBoundaryLeft(root->right); 
        } 
        // do nothing if it is a leaf node, this way we avoid 
        // duplicates in output 
    } 
} 
  
// A function to print all right boundary nodes, except a leaf node 
// Print the nodes in BOTTOM UP manner 
void printBoundaryRight(struct Node* root) 
{ 
    if (root) { 
        if (root->right) { 
            // to ensure bottom up order, first call for right 
            // subtree, then print this node 
            printBoundaryRight(root->right); 
            printf("%d ", root->data); 
        } 
        else if (root->left) { 
            printBoundaryRight(root->left); 
            printf("%d ", root->data); 
        } 
        // do nothing if it is a leaf node, this way we avoid 
        // duplicates in output 
    } 
} 
  
// A function to do boundary traversal of a given binary tree 
void printBoundary(struct Node* root) 
{ 
    if (root) { 
        printf("%d ", root->data); 
  
        // Print the left boundary in top-down manner. 
        printBoundaryLeft(root->left); 
  
        // Print all leaf nodes 
        printLeaves(root->left); 
        printLeaves(root->right); 
  
        // Print the right boundary in bottom-up manner 
        printBoundaryRight(root->right); 
    } 
} 
  
