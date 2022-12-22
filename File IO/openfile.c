#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("demo.txt", "r");

    int i = 0,n;
    int a[100];
   
    for(i=0;!feof(fp);i++){
        fscanf(fp, "%d", &a[i]);
    }
    n=i-1;

    for(i=0;i<n;i++){
        printf("\n %d",a[i]);
    }

    fclose(fp);
    return 0;
}