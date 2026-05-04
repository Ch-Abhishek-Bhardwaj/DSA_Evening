#include<iostream>
using namespace std;


void Name(int n,int i){
    if(i>n){
        return ;
    }
    cout<<"Abhishek"<<" ";
    Name(n,i+1);
}
int main(){
    int n;
    cin>>n;
    Name(n,1);
    return 0;
}