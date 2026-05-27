#include<stdio.h>

struct point {
    int x;
    int y;
};

int main(){
    struct point p;
    p.x = 1;
    p.y =8;

    printf("%d , %d " ,p.x , p.y);
}