#include<stdio.h>

void swap(int* a , int* b){
    int t ;
    t= *a;
    *a= *b;
    *b=t;

}

void rev(int arr[],int n){
    int* a = arr;
    int* b = a+n-1;
    while(b>a){
        swap(a,b);
        a=a+1;
        b=b-1;
    }
}

int main(){
    int arr[]= {2,9,6,74,45};
    int n=5;
    rev(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}