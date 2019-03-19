/*
Polynomial Addition Submissions: 4892   Accuracy: 36.87%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
         
Problems
Discussions
Given two polynomial numbers represented by a linked list. The task is to complete the  function addPolynomial that adds these lists meaning adds the coefficients who have same variable powers.

Input:
The first line of input contains an integer T denoting the number of test cases. Then in the next line is an integer N denoting the number of terms of first polynomial. In the next line are N space separated pairs x and y where x denotes the coefficient and y denotes the power. Similarly In the next line is an integer M denoting the no of terms of the second polynomial and in the line following it are N space separated pairs for second polynomial.

Output:
For each test case in a new line print the required polynomial in decreasing order of the power.

Constraints:
1 <= T <= 100
1 <= N, M <= 105
1 <= x, y <= 106

Example:
Input:
2
1
1 2
1
1 3
2
1 3 2 2
2
3 3 4 2
Output:
1x^3 + 1x^2
4x^3 + 6x^2


*/
/* Structure of Node used
struct Node
{
    int coeff;  // coefficient of the polynomial 
    int pow;   // power of the polynomial 
    Node* next;
};
*/
/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */


/*
//Your code here
    map<int,int> mp;
    Node *temp1=p1;
    Node *temp2=p2;
    while(temp1!=NULL)
    {
        mp[temp1->pow]+=temp1->coeff;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        mp[temp2->pow]+=temp2->coeff;
        temp2=temp2->next;
    }
    
    //cout<<mp.begin()->second<<"x^"<<mp.begin()->first;
    for(auto it =(mp.rbegin()); it != prev(mp.rend()); ++it)
    cout<<it->second<<"x^"<<it->first<<" + ";
    cout<<mp.begin()->second<<"x^"<<mp.begin()->first;



*/
void addPolynomial(Node *p1, Node *p2)
{
    //Your code here
     if(p1==NULL){
        Node* start=p2->next;
        printf("%dx^%d ",p2->coeff,p2->pow);
        while(start){
            printf("+ %dx^%d ",start->coeff,start->pow);
            start=start->next;
        }
        return;
    }
    if(p2==NULL){
        Node* start=p1->next;
        printf("%dx^%d ",p1->coeff,p1->pow);
        while(start){
            printf("+ %dx^%d ",start->coeff,start->pow);
            start=start->next;
        }
        return;
    }
    Node* ans=NULL;
    Node* pre=NULL;
    while(p1 && p2){
        if(p1->pow==p2->pow){
            p1->coeff=p1->coeff+p2->coeff;
            if(ans==NULL){
                ans=p1;
                pre=ans;
            }
            else{
                pre->next=p1;
                pre=pre->next;
            }
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->pow>p2->pow){
            if(ans==NULL){
                ans=p1;
                pre=p1;
            }
            else{
                pre->next=p1;
                pre=pre->next;
            }
            p1=p1->next;
        }
        else{
            if(ans==NULL){
                ans=p2;
                pre=p2;
            }
            else{
                pre->next=p2;
                pre=pre->next;
            }
            p2=p2->next;
        }
    }
    if(p1!=NULL)
        pre->next=p1;
    if(p2!=NULL)
        pre->next=p2;
    Node* start=ans->next;
    printf("%dx^%d ",ans->coeff,ans->pow);
    while(start){
        printf("+ %dx^%d ",start->coeff,start->pow);
        start=start->next;
    }
}
