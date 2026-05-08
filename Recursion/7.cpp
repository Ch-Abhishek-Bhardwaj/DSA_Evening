// Functional Recursion
#include<iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;

    return n+sum(n-1);
}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    cout<<fact(n);
    return 0;
}
