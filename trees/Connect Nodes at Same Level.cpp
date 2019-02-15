void connect(Node *p)
{
   // Your Code Here
 if(p == NULL)
 return;
 queue<Node *>q;
   q.push(p);
   struct Node* temp;
   while(!q.empty())
   {
       int s=q.size();
       while(s>1)
       {
           temp=q.front();
           q.pop();
           temp->nextRight=q.front();
           if(temp->left)
             q.push(temp->left);
           if(temp->right)
             q.push(temp->right);
           s--;
       }
       temp=q.front();
       temp->nextRight=NULL;
       q.pop();
       if(temp->left)
         q.push(temp->left);
       if(temp->right)
         q.push(temp->right);
   }
}

