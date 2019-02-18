/*
Select a Random Node from a Singly Linked List
Given a singly linked list, select a random node from linked list (the probability of picking a node should be 1/N if there are N nodes in list). You are given a random number generator.
Below is a Simple Solution
1) Count number of nodes by traversing the list.
2) Traverse the list again and select every node with probability 1/N. The selection can be done by generating a random number from 0 to N-i for i’th node, and selecting the i’th node node only if generated number is equal to 0 (or any other fixed number from 0 to N-i).

We get uniform probabilities with above schemes.

i = 1, probability of selecting first node = 1/N
i = 2, probability of selecting second node =
                   [probability that first node is not selected] * 
                   [probability that second node is selected]
                  = ((N-1)/N)* 1/(N-1)
                  = 1/N  
Similarly, probabilities of other selecting other nodes is 1/N

The above solution requires two traversals of linked list.



How to select a random node with only one traversal allowed?
The idea is to use Reservoir Sampling. Following are the steps. This is a simpler version of Reservoir Sampling as we need to select only one key instead of k keys.

(1) Initialize result as first node
   result = head->key 
(2) Initialize n = 2
(3) Now one by one consider all nodes from 2nd node onward.
    (3.a) Generate a random number from 0 to n-1. 
         Let the generated random number is j.
    (3.b) If j is equal to 0 (we could choose other fixed number 
          between 0 to n-1), then replace result with current node.
    (3.c) n = n+1
    (3.d) current = current->next
Below is the implementation of above algorithm.
filter_none

*/
/* C program to randomly select a node from a singly 
   linked list */
#include<stdio.h> 
#include<stdlib.h> 
#include <time.h> 
  
/* Link list node */
struct Node 
{ 
    int key; 
    struct Node* next; 
}; 
  
// A reservoir sampling based function to print a 
// random node from a linked list 
void printRandom(struct Node *head) 
{ 
    // IF list is empty 
    if (head == NULL) 
       return; 
  
    // Use a different seed value so that we don't get 
    // same result each time we run this program 
    srand(time(NULL)); 
  
    // Initialize result as first node 
    int result = head->key; 
  
    // Iterate from the (k+1)th element to nth element 
    struct Node *current = head; 
    int n; 
    for (n=2; current!=NULL; n++) 
    { 
        // change result with probability 1/n 
        if (rand() % n == 0) 
           result = current->key; 
  
        // Move to next node 
        current = current->next; 
    } 
  
    printf("Randomly selected key is %d\n", result); 
} 
  
/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST  */
  
/* A utility function to create a new node */
struct Node *newNode(int new_key) 
{ 
    /* allocate node */
    struct Node* new_node = 
        (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the key  */
    new_node->key  = new_key; 
    new_node->next =  NULL; 
  
    return new_node; 
} 
  
  
/* A utility function to insert a node at the beginning 
  of linked list */
void push(struct Node** head_ref, int new_key) 
{ 
    /* allocate node */
    struct Node* new_node = new Node; 
  
    /* put in the key  */
    new_node->key  = new_key; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  
  
// Driver program to test above functions 
int main() 
{ 
    struct Node *head = NULL; 
    push(&head, 5); 
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 30); 
  
    printRandom(head); 
  
    return 0; 
} 
