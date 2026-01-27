#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;
    if(n<=0){
        cout<<"Please Enter a valid number (Positive Number)";
        return 0;
    }
    if(n<1){
        return 1;
    }
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"Factorial is:"<<fact;
    return 0;

}