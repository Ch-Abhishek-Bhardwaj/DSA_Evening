#include<iostream>
using namespace std;

void rev(int arr[], int n,int start){
    
    if(start >=n/2){
        return ;
    }
    swap(arr[start], arr[n-start-1]);
    rev(arr,n, start+1);
}

int main(){
    int arr[5]= {1,2,3,4,9};
    int start =0;
    int n= 5;
    rev(arr,n,start);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}