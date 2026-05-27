#include<stdio.h>

void copy_file(FILE *fromfp , FILE *tofp){
    char c;

    while(fscanf(fromfp, "%c", &c) == 1){
        fprintf(tofp, "%c", c);
    }
}

int main(){

    FILE *fp1, *fp2;

    char coprime[100], GCD[100];

    fgets(coprime, 100, stdin);
    fgets(GCD, 100, stdin);

    if((fp1 = fopen(coprime, "r")) == NULL){
        fprintf(stderr, "Opening file1 Failed\n");
        return 1;
    }

    copy_file(fp1, stdout);
    fclose(fp1);

    if((fp2 = fopen(GCD, "r")) == NULL){
        fprintf(stderr, "Opening file Failed\n");
        return 1;
    }

    copy_file(fp2, stdout);
    fclose(fp2);

    return 0;
}