/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
bool isIsomorphic(Node *r1,Node *r2)
{
//add code here.
if(r1 == NULL && r2 == NULL)return true;
if(r1 == NULL || r2 == NULL)return false;
if(r1->data != r2->data)return false;
else
{
    if((isIsomorphic(r1->left,r2->left) && isIsomorphic(r1->right,r2->right)) || (isIsomorphic(r1->left,r2->right) && isIsomorphic(r1->right,r2->left)))

    {
        return true;
    }
}
}
