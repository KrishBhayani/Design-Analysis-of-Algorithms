#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    int i;

    fp = fopen("demo.txt", "w");

    for(i=0;i<=100;i++){
        fprintf(fp,"%d\n",i);
    }

    fclose(fp);
    return 0;

}