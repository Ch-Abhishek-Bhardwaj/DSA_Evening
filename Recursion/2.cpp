#include<iostream>
using namespace std;

void num(int n,int i){
    if(i>n){
        return ;
    }
    cout<<i<<" ";
    num(n,i+1);
}

int main(){
    int n;
    cin>>n;
    num(n,1);
    return 0;
}