#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;  
}*first;

void create(int *A,int n){
    first=new Node;
    first->data=A[0];
    first->next=0; 
    Node *t,*last;
     last=first;   
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}


int main(){
    int A[]={2,3,4,55,6,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    create(A,n);

}
