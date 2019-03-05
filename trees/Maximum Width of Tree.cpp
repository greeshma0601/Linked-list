/*
Maximum Width of Tree
Given a Binary Tree, find the maximum width of it.  Maximum width is maximum number of nodes in any level.  For example, maximum width of following tree is 4 as there are 4 nodes at 3rd level

          1
       /     \
     2        3
   /    \    /    \
  4    5   6    7
    \
      8

            

Input:
The task is to complete the method that takes root of tree as an argument.

There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return maximum width of tree.

Constraints:
1 <=T<= 30
1 <= Size of arrays <= 100
1 <= Values in arrays <= 1000

Example:
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
 

Output:
2
2

There are two test casess.  First case represents a tree with 3 nodes, 2 edges. Here root is 1, left child of 1 is 3 and right child of 1 is 2.   Second test case represents a tree with 4 edges and 5 nodes.

*/

// Function to find the maximum width of the tree 
// using level order traversal 
int maxWidth(struct Node * root) 
{ 
    // Base case 
    if (root == NULL) 
        return 0; 
  
    // Initialize result 
    int result = 0; 
  
    // Do Level order traversal keeping track of number 
    // of nodes at every level. 
    queue<Node*> q; 
    q.push(root); 
    while (!q.empty()) 
    { 
        // Get the size of queue when the level order 
        // traversal for one level finishes 
        int count = q.size() ; 
  
        // Update the maximum node count value 
        result = max(count, result); 
  
        // Iterate for all the nodes in the queue currently 
        while (count--) 
        { 
            // Dequeue an node from queue 
            Node *temp = q.front(); 
            q.pop(); 
  
            // Enqueue left and right children of 
            // dequeued node 
            if (temp->left != NULL) 
                q.push(temp->left); 
            if (temp->right != NULL) 
                q.push(temp->right); 
        } 
    } 
  
    return result; 
} 
