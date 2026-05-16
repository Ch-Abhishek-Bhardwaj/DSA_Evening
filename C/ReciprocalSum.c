#include<stdio.h>

int main(){
    float sum = 0;
    int n;
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
        sum = sum +(1/i);
    }
    printf("%f",sum);
}