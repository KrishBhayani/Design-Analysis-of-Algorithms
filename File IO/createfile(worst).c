#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    int i;

    fp = fopen("worst.txt", "w");

    for(i=1000;i>=0;i--){
        fprintf(fp,"%d\n",i);
    }

    fclose(fp);
    return 0;

}