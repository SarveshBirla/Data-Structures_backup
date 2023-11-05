#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

}*first;

void Create(int A[],int n){
    Node *temp,*last;
    first=new Node;
    first->data=A[0];
    first->next=0;
    first=last;
    for(int i=0;i<n;i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=0;
        last->next=temp;
        last=temp;
    }
    

}

Node *Search(int key){
    Node *p,*q;
    p=first;
    q=0;
    while(p!=0){
        if(p->data==key){
            if(p!=first){
                q->next=p->next;
                p->next=first;
                first=p;
            }
            return p;
        }
        q=p;
        p=p->next;
    }
    return 0;
}
int main()
{
    int A[]={12,34,56,47,68,98,35,23};
    Create(A,sizeof(A)/sizeof(A[0]));
    Node *temp=Search(56) ;
    cout<<temp->data;
}
