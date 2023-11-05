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
void displayLL(){
    Node *p=first;
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

 int count(Node *p){
    int count=0;
    while(p)
    {    count++;
          p=p->next;       
    }
    return count;
}

void Insert(int index,int data){
    if(index<0 || index > count(first) )
    return;
    Node *p,*t=new Node;
    p=first;
    t->data=data;
   if(index==0)
   {
    t->next=first;
    first=t;
   } 
   else
   {
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    t->next=p->next;
    p->next=t;

   }   

}


int main(){
    int A[]={2,3,4,55,6,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    create(A,n);
    displayLL();
    Insert(3,89);
    cout<<"\n";
    displayLL();

}