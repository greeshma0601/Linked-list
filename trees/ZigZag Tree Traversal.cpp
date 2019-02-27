/*
ZigZag Tree Traversal Submissions: 4623   Accuracy: 39.22%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
      
Given a binary tree of size N, your task is to complete the function zigZagTraversal(), that prints the nodes of binary tree in ZigZag manner.

For Example:
For the below binary tree the zigzag order 
traversal will be 1 3 2 7 6 5 4.

Binary Tree Example
Input:
The function takes a single argument as input, the reference pointer to the root of the binary tree.
There will be T testcases and for each test case the function will be called separately.
Output:
For each test case print on a new line space separated all the nodes of the tree in ZigZag manner.
Constraints:
1<=T<=500
1<=N<=1000
Example:
Input:
1
10
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R 4 8 L 5 9 R 6 10 L 7 11 R
Output:
1 3 2 4 5 6 7 11 10 9 8

 
*/

void zigZagTraversal(Node* root)
{
	// Code here
	 if (!root) 
        return; 
  
    // declare two stacks 
    stack<struct Node*> currentlevel; 
    stack<struct Node*> nextlevel; 
  
    // push the root 
    currentlevel.push(root); 
  
    // check if stack is empty    
    bool lefttoright = true; 
    while (!currentlevel.empty()) { 
  
        // pop out of stack 
        struct Node* temp = currentlevel.top(); 
        currentlevel.pop(); 
  
        // if not null 
        if (temp) { 
  
            // print the data in it 
            cout << temp->data << " "; 
  
            // store data according to current 
            // order. 
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        } 
  
        if (currentlevel.empty()) { 
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
        } 
    } 
    cout<<endl;
}
