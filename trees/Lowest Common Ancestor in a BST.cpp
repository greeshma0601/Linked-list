/*
Lowest Common Ancestor in a BST
Given a Binary Search Tree and 2 nodes value n1 and n2, your task is to find the lowest common ancestor(LCA) of the two nodes .

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains three lines of input.
The first line contains N, the number of nodes of the BST.
The second line contains the values of the nodes, each separated by a space.
The third line contains the two values n1 and n2 separated by a space.

Output Format:
For each testcase, in a new line, print the LCA of n1 and n2.

Your Task:
This is a function problem. You don't have to take any input. You are required to complete the function LCA that takes node, n1, n2 as parameters and returns the node that is LCA of n1 and n2.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Node value <= 1000

Example:
Input
1
6
5 4 6 3 7 8
7 8

Output 
7

Explanation 
The BST in above test case will look like

    5
   /  \ 
  4  6
 /      \
3        7
            \ 
             8
here the LCA of 7 and 8 is 7 .
 

*/
//Code by 1shubhamjoshi1
#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
Node* LCA(Node *root, int , int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        int l,r;
        cin>>l>>r;
        cout<<LCA(root,l,r)->data<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete
this function*/
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   while(root !=NULL)
   {
       if(root->data>n1 && root->data>n2)
       root=root->left;
       else if(root->data<n1 && root->data<n2)
       root=root->right;
       else break;
   }
   return root;
}
