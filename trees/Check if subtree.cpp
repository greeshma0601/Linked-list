/*

Check if subtree Submissions: 10602   Accuracy: 41.57%   Difficulty: Medium   Marks: 4
            
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example:

S:          10
              /   \
            4     6
                 /
             30

T:                  26
                      /   \
                    10   3
                   /   \     \

               4       6     3
                       /
                    30

In above example S is subtree of T.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing 0 or 1, depending on the input.

Constraints:
1 <= T <= 30
1 <= N <= 103

Example:
Input:
2
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R

3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
0

Explanation:
Testcase 2:
Structure of tree:
10 4 L 10 6 R 4 30 R
10 is root node of tree. Left child of 10 is 4 and right child of 10 is 6. Right child of 4 is 30.Check if subtree Submissions: 10602   Accuracy: 41.57%   Difficulty: Medium   Marks: 4
            
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example:

S:          10
              /   \
            4     6
                 /
             30

T:                  26
                      /   \
                    10   3
                   /   \     \

               4       6     3
                       /
                    30

In above example S is subtree of T.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing 0 or 1, depending on the input.

Constraints:
1 <= T <= 30
1 <= N <= 103

Example:
Input:
2
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R

3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
0

Explanation:
Testcase 2:
Structure of tree:
10 4 L 10 6 R 4 30 R
10 is root node of tree. Left child of 10 is 4 and right child of 10 is 6. Right child of 4 is 30.Check if subtree Submissions: 10602   Accuracy: 41.57%   Difficulty: Medium   Marks: 4
            
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example:

S:          10
              /   \
            4     6
                 /
             30

T:                  26
                      /   \
                    10   3
                   /   \     \

               4       6     3
                       /
                    30

In above example S is subtree of T.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing 0 or 1, depending on the input.

Constraints:
1 <= T <= 30
1 <= N <= 103

Example:
Input:
2
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R

3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
0

Explanation:
Testcase 2:
Structure of tree:
10 4 L 10 6 R 4 30 R
10 is root node of tree. Left child of 10 is 4 and right child of 10 is 6. Right child of 4 is 30.Check if subtree Submissions: 10602   Accuracy: 41.57%   Difficulty: Medium   Marks: 4
            
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example:

S:          10
              /   \
            4     6
                 /
             30

T:                  26
                      /   \
                    10   3
                   /   \     \

               4       6     3
                       /
                    30

In above example S is subtree of T.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing 0 or 1, depending on the input.

Constraints:
1 <= T <= 30
1 <= N <= 103

Example:
Input:
2
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R

3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
0

Explanation:
Testcase 2:
Structure of tree:
10 4 L 10 6 R 4 30 R
10 is root node of tree. Left child of 10 is 4 and right child of 10 is 6. Right child of 4 is 30.Check if subtree Submissions: 10602   Accuracy: 41.57%   Difficulty: Medium   Marks: 4
            
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example:

S:          10
              /   \
            4     6
                 /
             30

T:                  26
                      /   \
                    10   3
                   /   \     \

               4       6     3
                       /
                    30

In above example S is subtree of T.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering a and b) with a 'L' (means node b on left of a) or 'R' (means node b on right of a) after a and b.

Output:
For each testcase, there will be a single line containing 0 or 1, depending on the input.

Constraints:
1 <= T <= 30
1 <= N <= 103

Example:
Input:
2
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R

3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
0

Explanation:
Testcase 2:
Structure of tree:
10 4 L 10 6 R 4 30 R
10 is root node of tree. Left child of 10 is 4 and right child of 10 is 6. Right child of 4 is 30.







*/
/* A binary tree node
struct Node
{
    int key;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
/*
bool isIdentical(Node * root1, Node *root2) 
{ 
    // base cases 
    if (root1 == NULL && root2 == NULL) 
        return true; 
  
    if (root1 == NULL || root2 == NULL) 
        return false; 
  
    // Check if the data of both roots is same and data of left and right 
       subtrees are also same 
    if (root1->key == root2->key  && 
            isIdentical(root1->left, root2->left) && 
            isIdentical(root1->right, root2->right) )
             return true;
             
             return false;
} 

bool isSubtree(Node*  T1 ,Node * T2)
{
     if(T2==NULL)
      return true;
      if(T1==NULL)
      return false;
      
      if(isIdentical(T1,T2))
       return true;
      return isSubtree(T1->left,T2)||
      isSubtree(T1->right,T2);
}
*/
void storeInorder(Node *root, char arr[], int &i) 
{ 
    if (root == NULL) 
    { 
        arr[i++] = '$'; 
        return; 
    } 
    storeInorder(root->left, arr, i); 
    arr[i++] = root->key; 
    storeInorder(root->right, arr, i); 
} 
  
// A utility function to store preorder traversal of tree rooted 
// with root in an array arr[]. Note that i is passed as reference 
void storePreOrder(Node *root, char arr[], int &i) 
{ 
    if (root == NULL) 
    { 
        arr[i++] = '$'; 
        return; 
    } 
    arr[i++] = root->key; 
    storePreOrder(root->left, arr, i); 
    storePreOrder(root->right, arr, i); 
} 
  
/* This function returns true if S is a subtree of T, otherwise false */
bool isSubtree(Node *T, Node *S) 
{ 
    /* base cases */
    if (S == NULL)  return true; 
    if (T == NULL)  return false; 
  
    // Store Inorder traversals of T and S in inT[0..m-1] 
    // and inS[0..n-1] respectively 
    int m = 0, n = 0; 
    char inT[MAX], inS[MAX]; 
    storeInorder(T, inT, m); 
    storeInorder(S, inS, n); 
    inT[m] = '\0', inS[n] = '\0'; 
  
    // If inS[] is not a substring of preS[], return false 
    if (strstr(inT, inS) == NULL) 
        return false; 
  
    // Store Preorder traversals of T and S in inT[0..m-1] 
    // and inS[0..n-1] respectively 
    m = 0, n = 0; 
    char preT[MAX], preS[MAX]; 
    storePreOrder(T, preT, m); 
    storePreOrder(S, preS, n); 
    preT[m] = '\0', preS[n] = '\0'; 
  
    // If inS[] is not a substring of preS[], return false 
    // Else return true 
    return (strstr(preT, preS) != NULL); 
} 
