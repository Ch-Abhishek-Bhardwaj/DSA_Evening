///pallindrome

#include<iostream>
using namespace std;

bool pallindrome(int i,string str){
    if(i>=str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    return pallindrome(i+1,str);
}

int main(){
    string s = "MADAM";
    cout<<pallindrome(0,s);
    return 0;
}