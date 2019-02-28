/*
Serialize and Deserialize a Binary Tree
Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to tree and returns it.
Note: The structure of tree must be maintained.

Input Format:
 The method serialize takes  two arguments, the first is the root of Binary Tree and second argument is an array A[ ] which stores the serialized tree. The method deSerialize takes only one argument which is the serialized array A[] and returns the deserialzed tree's root . The struct Node has a data part which stores the data, pointer to left child and pointer to right child.There are multiple test cases. For each test case, this method will be called individually.

Output Format:
The  output in the expected output will be the inorder traversal of the returned tree .

Your Task:
The task is to complete two method serialize and deSerialize.

Constraints:
1 <=T<= 30
1 <= Number of nodes<= 100
1 <= Data of a node<= 100

Example(To be used only for expected output):
Input
2
2
1 2 L 1 3 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output
2 1 3
40 20 60 10 30

*/

void serialize(Node *root,vector<int> &a)
{
    //Your code 
    if(root == NULL){a.push_back(-1);return;}
    a.push_back(root->data);
    serialize(root->left,a);
    serialize(root->right,a);
}
/*this function deserializes
 the serialized vector A*/
 Node *newnode(int t)
 {
     Node* temp = new Node;
     temp->data=t;
     temp->left=temp->right=NULL;
     return temp;
 }
 
 Node *deserializeutil(vector<int>&a,int *i)
 {
     if(*i<a.size() && a[*i]!=-1)
     {
         Node* root = newnode(a[*i]);
         *i=*i+1;
         root->left=deserializeutil(a,i);
         root->right = deserializeutil(a,i);
         return root;
     }
     if(*i<a.size())
     *i=*i+1;
     
     return NULL;
 }
Node * deSerialize(vector<int> &a)
{
 if(a.empty() || a[0] == -1)return NULL;
 int i=0;
 deserializeutil(a,&i);
   //Your code here
}/*
