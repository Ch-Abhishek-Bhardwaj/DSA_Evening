#include<stdio.h>
#include<stdlib.h>

char *duplicate(char *s){
    int len;
    char *t;

    for(int i=0;s[i] !='\0';i++){
        len =i;
    }
    t = (char *)malloc( (len+1)*sizeof(char));
    for(int i=0;i<len;i++){
        t[i]=s[i];
    }
    t[len] = '\0';
    return t;
}

int main(){
    char s[] = "sample";
    char *t;

     t = duplicate(s);
     printf("%s\n",t);
     free(t);
     return 0;

}