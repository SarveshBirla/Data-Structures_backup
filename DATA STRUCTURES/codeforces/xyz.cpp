#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int move=0,a,b,c,d;
        cin >>a>>b>>c>>d;
        if((d-b)>=(c-a)){
           while((c-a)!=(d-b)){
               a=a-1;
               move++;
           } 
           move=move+(c-a);
           cout<<move<<endl;
        }
        else 
        cout<<-1<<endl;
    }

}
