/*void printSpiral(Node *root)
{
     //Your code here
     Node *p,*q;
     stack<Node*>s1;
     stack<Node*>s2;
     s1.push(root);
     while(!s1.empty() || s2.empty())
     {
         while(!s1.empty())
         {
             p=s1.top();s1.pop();
             cout<<p->data<<" ";
             if(p->left)
             {
                 s2.push(p->left);
             }
             
            if(p->right)
            {
                s2.push(p->right);
            }
         }
         while(!s2.empty())
         {
             q=s2.top();s2.pop();
             cout<<q->data<<" ";
             if(q->right)
             {
                 s2.push(q->right);
             }
             
            if(q->left)
            {
                s2.push(q->left);
            }
         }
     }
     cout<<endl;
}*/
#include <stack>
void fs2(std :: stack < struct Node * > & s1 , std :: stack < struct Node * > & s2);
void fs1(std :: stack < struct Node * > & s1 , std :: stack < struct Node * > & s2);

void fs1(std :: stack < struct Node * > & s1 , std :: stack < struct Node * > & s2)
{
       while(!s1.empty())
         {
             Node * top = s1.top(); s1.pop();
             
             std :: cout << top->data << " ";
             
             if(top -> right )
                s2.push(top -> right);
             if(top -> left )
                s2.push(top -> left);
         }
         if(!s2.empty()) 
            fs2(s1,s2);
}
void fs2(std :: stack < struct Node * > & s1 , std :: stack < struct Node * > & s2)
{
       while(!s2.empty())
     {
         Node * top = s2.top(); s2.pop();
         
         std :: cout << top -> data << " ";
         
         if(top -> left)
            s1.push(top -> left);
         if(top -> right )
            s1.push(top -> right);
     }
     if(!s1.empty()) 
        fs1(s1,s2);
}

void printSpiral(Node *root)
{
    if(!root)   return;
     std :: stack < struct Node * > s1;
     std :: stack < struct Node * > s2;
     s1.push(root);
     fs1(s1,s2);
}
