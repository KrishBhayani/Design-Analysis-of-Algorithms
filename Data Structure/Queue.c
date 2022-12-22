#include<stdio.h>

static front = -1, rear = -1;


int enqueue(int a[],int n,int e){

    if (rear==n){
        printf("Queue Overflow");
        return 0;
    }
    if(front==-1){
        front = 0;
    }
    rear++;
    a[rear] = e;
}

int dequeue(int a[],int n){
    int temp;

    if(front<0){
        printf("Queue Underflow");
        return 0;
    }

     temp = a[front];

    if (front == rear){
        front = -1;
        rear = -1;
        return temp;
    }

    front ++;
    return temp;
}


int display(int a[],int n){
    int i;

    for(i=front;i<=rear;i++){
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
        enqueue(a,n,e);
    }

    display(a,n);

    printf("Deque element : %d\n",dequeue(a,n));

    display(a,n);

}