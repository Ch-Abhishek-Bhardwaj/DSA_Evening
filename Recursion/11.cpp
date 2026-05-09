// String is pallindrom or not 

#include<iostream>
using namespace std;

void rev(string &s,int i){
    int n= s.size();
    if(i>=n/2){
        return ;
    }
    swap(s[i],s[n-i-1]);
    rev(s,i+1);
}

int main(){
    string s = "Abhishek";
    rev(s,0);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

    return 0;
}