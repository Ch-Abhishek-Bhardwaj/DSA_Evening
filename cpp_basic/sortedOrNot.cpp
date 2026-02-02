#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,2};
    bool isSorted = true;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"The array is sorted";

    }
    else{
        cout<<"The array is not sorted";
    }
    return 0;
}