// sum till n
#include <iostream>
using namespace std;

void sum(int n,int summ){
    if(n<1){
        cout<<summ;
        return ;
    }
    sum(n-1,summ+n);
}

int main(){
    int n; 
    cin>>n;
    sum(n , 0);
    return 0;
}