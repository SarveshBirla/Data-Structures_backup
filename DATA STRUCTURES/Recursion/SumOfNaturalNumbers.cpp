#include<iostream>
using namespace std;
int sumofnaturalnumbers(int n){
    if(n==0)
     return 0;
    else 
     return sumofnaturalnumbers(n-1)+n;
}
int main()
{
    int n;
    cout<<"Enter Upper Limit\t ";
    cin>>n;
    cout<<sumofnaturalnumbers(n);
}