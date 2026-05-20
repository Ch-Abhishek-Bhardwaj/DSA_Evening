#include<stdio.h>
int cp(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    return 0;
}

int main(){
    int arr[]= {2,5,3,6,8,4,6,99,75,45};
    int arr2[] = {2,5,6,8,6,8,4,8,6,45};
    int i=3;
    int j=2;
    int n=6;
    cp(arr+i,arr2+j,n);
    for(int i=0;i<10;i++){
        printf("%d   ",arr2[i]);
    }
}