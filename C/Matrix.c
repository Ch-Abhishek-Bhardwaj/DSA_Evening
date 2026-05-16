// TRACE
#include<stdio.h>

int main(){
    int a,n;
    int trace = 0;
    scanf("%d",&n);

    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(i==j){
                trace = trace +a ;
            }
        }
    }
    printf("The ans is %d",trace);
}