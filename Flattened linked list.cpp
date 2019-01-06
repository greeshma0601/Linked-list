
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
Node *merge (Node *h1,Node *h2)
{
    if(h1==NULL) return(h2);
    if(h2==NULL) return(h1);
    if(h1->data<h2->data) {
        h1->bottom=merge(h1->bottom,h2);
        return(h1);
    }
    else{
        h2->bottom=merge(h1,h2->bottom);
        return(h2);
        
    }
}
Node *flatten(Node *root)
{
    Node *a =root;
    Node  *b=root->next;
    while(b!=NULL)
    {
        Node *c=b->next;
        a=merge(a,b);
        b=c;
        
    }
    return(a);
}
