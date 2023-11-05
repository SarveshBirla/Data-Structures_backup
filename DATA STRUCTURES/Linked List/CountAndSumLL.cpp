#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;  
}*first;

void create(int A[],int n){
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

int count(Node *p){
    int count=0;
    while(p)
    {    count++;
          p=p->next;       
    }
    return count;
}


int sum(Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}


int main(){
    int A[]={2,3,4,55,6,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    create(A,n);
    cout<<"Lenght of LL is "<<count(first)<<endl;
    cout<<"Sum of All elements is "<<sum(first)<<endl;

}
