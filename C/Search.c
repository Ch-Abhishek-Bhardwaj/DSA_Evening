#include<stdio.h>

bool Search(int arr[], int n , int  key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        return Search(arr+1,n-1,key);
    }
}

int main(){
    int arr[]={31,4,10,25,5};
    int n=5;
    int key =100;
    bool t = Search(arr,n,key);
    if(t){
        printf("Element found");
    }else{
        printf("not found");
    }
}