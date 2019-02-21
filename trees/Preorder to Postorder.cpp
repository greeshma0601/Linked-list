/*
Preorder to Postorder Submissions: 7749   Accuracy: 35.57%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
          
Given an array arr[] of N nodes representing preorder traversal of BST. The task is to print its postorder traversal.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N input as arr[i].

Output:
Postorder traversal of the given preorder traversal is printed.

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= arr[i] <= 104

Example:
Input:
3
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120

Output:
35 30 100 80 40
35 32 30 120 100 90 80 40
 
*/
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};
int v[1001],a[1001],c;
Node* insert(Node* tree,Node* n)
{
    if(!tree)
    {
        tree=n;
        return tree;
    }
    if(tree->data>n->data)
        tree->left=insert(tree->left,n);
    else
        tree->right=insert(tree->right,n);
    return tree;
}
void pre(Node* root)
{
    if(!root)
        return;
    a[c]=root->data;
    c++;
    if(root->left)
        pre(root->left);
    if(root->right)
        pre(root->right);
}
void post(Node* root)
{
    if(!root)
        return;
    if(root->left)
        post(root->left);
    if(root->right)
        post(root->right);
    a[c]=root->data;
    c++;
}
int main() {
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>v[i];
        struct Node* tree=(struct Node*)malloc(sizeof(struct Node));
        tree->data=v[0];
        tree->right=NULL;
        tree->left=NULL;
        for(i=1;i<n;i++)
        {
            struct Node* n=(struct Node*)malloc(sizeof(struct Node));
            n->data=v[i];
            tree=insert(tree,n);
        }
        c=0;
        pre(tree);
        bool b=true;
        for(i=0;i<n;i++)
            if(v[i]!=a[i])
                b=false;
        if(!b)
            cout<<"NO\n";
        else
        {
            c=0;
            post(tree);
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
        
    }
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    Node * left;
    Node * right;
};
Node * createNode(int x)
{
    Node* root=new Node;
    root->data=x;
    root->left=NULL;
    root->right=NULL;
    return root;
}
Node * makeTree(vector< int > arr,int n)
{
    stack< Node * > st;
    Node * root=createNode(arr[0]);
    st.push(root);
    for(int i=1;i<n;i++)
    {
    struct Node * temp=NULL;
    while(!st.empty() && arr[i]>(st.top()->data))
    {
        temp=st.top();
        st.pop();
    }
    if(temp!=NULL)
    {
        temp->right=createNode(arr[i]);
        st.push(temp->right);
    }
    else
    {
        temp=st.top();
        temp->left=createNode(arr[i]);
        st.push(temp->left);
    }
    
}
return root;
}
void Inorder(vector< int > & inorder,Node* root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(inorder,root->left);
    inorder.push_back(root->data);
    //cout<<root->data<<" ";
    Inorder(inorder,root->right);
    
}
void Postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector< int > arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    Node * root=makeTree(arr,n);
	    vector< int > inorder;
	    Inorder(inorder,root);
	    
	    int flag=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(inorder[i]>inorder[i+1])
	        {
	            cout<<"NO";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        Postorder(root);
	    }
cout<<endl;
}

	return 0;
}

*/
