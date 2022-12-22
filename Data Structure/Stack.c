#include <stdio.h>
#include <stdlib.h>

static top = -1;

int push(int a[],int n,int e){
    if(top == n){
        printf("Stack overflow");
        return 0;
    }
    top = top+1;
    a[top] = e;
    return 0;
}

int pop(int a[]){
    int temp;

    if(top<=0){
        printf("Stack underflow");
        return 0;
    }
    
    temp = a[top];
    top--;
    return temp;
}

int peep(int a[],int i){
    if(top<=0){
        printf("Stack underflow");
        return 0;
    }
    return a[top-i+1];
}

int change(int a[],int i, int n){
    if(top<=0){
        printf("Stack underflow");
        return 0;
    }
    a[top-i+1]=n;
    return 0;
}

int display(int a[],int n){
    int i;

    for(i=0;i<n;i++){
         printf("\n%d\n",a[i]);
    }
        return 0;
}


int main(){
    int n,i,e;
    
    printf("Enter array index : ");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        printf("Enter array element : ");
        scanf("%d",&e);
        push(a,n,e);
    }

    display(a,n);

    printf("Poped array : %d\n",pop(a));
    printf("Peeped array : %d\n",peep(a,2));

    change(a,3,8);
    display(a,n);
}