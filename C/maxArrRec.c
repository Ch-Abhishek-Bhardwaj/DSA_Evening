#include<stdio.h>
int max(int a, int b){
    return (a > b) ? a:b;
}

int findMax(int arr[] ,int n){
    if(n==0) return -99999;
    if(n==1) return arr[0];
    return max(findMax(arr,n/2),findMax(arr+n/2 , n-n/2));
}

int main(){
    int n = 6;
    int arr[] = {25,98,5,7,86,24};
    
    int ans = findMax(arr ,n);
    printf("%d ",ans);

}