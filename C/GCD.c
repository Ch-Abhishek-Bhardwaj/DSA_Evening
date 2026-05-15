#include<stdio.h>

int main(){
    int a=16;
    int b =8;
    int t;

    if(a<b){
        t = a;
        a= b;
        b=t;
    }

    while(!(b == 0)){
        t = a;
        a = b;
        b = t%b;
    }
    printf("%d \n",a);
}