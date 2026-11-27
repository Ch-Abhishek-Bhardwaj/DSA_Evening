#include<bits/stdc++.h>
using namespace std;

bool great(int a, int b){
    return a>b;
}

int main(){
    int n =5;
    vector<int> arr = {4,9,6,7,8};
    sort(arr.begin(),arr.end(),great);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}