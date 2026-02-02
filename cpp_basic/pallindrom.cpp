#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    string str = "anbhi";
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev){
        cout<<"Pallindrom";
    }
    else{
        cout<<"Not Pallindrom";
    }
    return 0;
}
