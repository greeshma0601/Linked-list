/*

Linked List Matrix Submissions: 1960   Accuracy: 65.64%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes in Noida
       
Problems
Discussions
Given a Matrix mat of N*N size, the task is to complete the function constructLinkedMatrix(), that constructs a 2D linked list representation of the given matrix.

Input : 2D matrix 
1 2 3
4 5 6
7 8 9

Output :
1 -> 2 -> 3 -> NULL
|    |    |
v    v    v
4 -> 5 -> 6 -> NULL
|    |    |
v    v    v
7 -> 8 -> 9 -> NULL
|    |    |
v    v    v
NULL NULL NULL
Input:
The fuction takes 2 argument as input, first the 2D matrix mat[][] and second an integer variable N, denoting the size of the matrix.
There will be T test cases and for each test case the function will be called separately.

Output:
The function must return the reference pointer to the head of the linked list.

Constraints:
1<=T<=100
1<=N<=150

Example:
Input:
2
3
1 2 3 4 5 6 7 8 9
2
1 2 3 4
Output:
1 2 3 4 5 6 7 8 9
1 2 3 4
*/


/*structure of the node of the linked list is as
struct Node
{
	int data;
	Node* right, *down;
};*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructmat(int mat[MAX][MAX],int i,int j,int m,int n)
{
    if(i>n-1  || j>n-1)
    return NULL;
    Node *temp=new Node();
    temp->data=mat[i][j];
    temp->right=constructmat(mat,i,j+1,m,n);
    temp->down=constructmat(mat,i+1,j,m,n);
    return temp;
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    return constructmat(mat,0,0,n,n);
}
