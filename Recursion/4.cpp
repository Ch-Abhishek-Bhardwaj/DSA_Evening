#include<iostream>
using namespace std;

void rev(int n){
    if(n==0){
        return ;
    }
    rev(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    rev(n);
    return 0;

}