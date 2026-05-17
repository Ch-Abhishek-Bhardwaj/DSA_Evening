#include<stdio.h>

int isCoprime(int a , int b){
    int t;
    if(a<b){
        t =a; 
        a = b;
        b =t;
    }
    while(b!=0){
        t = a%b;
        a = b;
        b = t;
    }
    if (a==1) return 1;
    else return 0; 
}

int main(){
    int prev, curr;
    int i,n;
    int count =0;
    scanf("%d", &n);
    scanf("%d", &prev);
    for(i=1; i<n; i++){
        scanf("%d", &curr);
        if(isCoprime(prev, curr)){
            count++;
        }
        prev = curr;
    }
    printf("%d", count);
    return 0;
    
}