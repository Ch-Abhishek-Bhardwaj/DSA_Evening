#include<stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int findMax(int n){
    int x;
    if(n==0) return -99999;
    scanf("%d",&x);
    if(n==1) return x;
    return max(x,findMax(n-1));
}

int main(){
    int n;
    scanf("%d",&n);
    int ans = findMax(n);
    printf("Maximum %d", ans);

}