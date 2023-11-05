#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* next;
};
 Node* head=new Node;
void CreateLL(int *A,int n){
   
     Node *lastnode=new Node;
    
    head->data=A[0];
    head->next=0;
    lastnode=head;
    for(int i=1;i<n;i++){
      Node *temp=new Node;
      temp->data=A[i];
      temp->next=NULL;
      lastnode->next=temp;
      lastnode=temp;
        
    }
}
void displayLL(){
    Node *p=head;
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }


}
int main(){
int A[]={3,5,78,97,58};
CreateLL(A,5);
displayLL();

}