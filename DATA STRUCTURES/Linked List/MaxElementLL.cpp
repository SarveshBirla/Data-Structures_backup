#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

};
Node *first;

void create(int A[],int n)
{   Node *temp,*last;
     first=new Node;
    first->data=A[0];
    first->next=0;
    last=first;
    for(int i=0;i<n;i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=0;
        last->next=temp;
        last=temp;
    }
}
`x`
int FindMax(Node *f){
int Max=INT32_MIN;
Node *p=f;
while(p!=0){
    if(p->data>Max){
        Max=p->data;
    }
    p=p->next;
}
return Max;
}


int main(){
    int A[]={2,4,7,9,67,56,73};
    create(A,sizeof(A)/sizeof(A[0]));
   cout<<FindMax(first);
return 0;
}