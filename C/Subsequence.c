#include<stdio.h>

int main(){
    int prev;
    int curr;
    int len = 0;
    int maxlen = 0;

    scanf("%d",&prev);
    if(prev != -1){
        len = 1;
        maxlen = 1;
        
    }
    scanf("%d",&curr);
    while(curr!= -1){
        if(prev< curr){
            len = len +1;
        }else{
            if(maxlen<len){
                maxlen = len;
            }
            len = 1;
        }
        prev = curr ;
        scanf("%d",&curr);
    }
    if(maxlen<len){
        maxlen = len;
    }

    printf("%d", maxlen);
}