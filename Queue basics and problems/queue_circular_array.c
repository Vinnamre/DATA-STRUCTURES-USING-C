// Implementing circular queue using array

#include<stdio.h>
#include<stdlib.h>
#define len 20

int queue[len],size;
int front = -1;
int rear = -1;

void create(){
    printf("Enter the size of the queue : ");
    scanf("%d",&size);
}

void enqueue(){
    if(front == -1 && rear == -1){
        front = rear = 0;
        printf("Enter the data : ");
        scanf("%d",&queue[rear]);
    } else if (front = (rear+1)%size ){
        printf("The queue is full (OVERFLOW)");
    } else {
        rear = (rear+1)%size;
        printf("Enter the data : ");
        scanf("%d",&queue[rear]);
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("The queue is empty");
    } else if (front == rear){
        printf("The data which got removed is : %d",queue[front]);
        front = rear = -1;
    } else {
        printf("The data which got removed is : %d",queue[front]);
        front = (front+1)%size;

    }
}

void display(){
    int i = front;
    if(front == -1 && rear == -1){
        printf("the queue is Empty");
    } else {
        printf("The queue is : ");
        while(i!=rear){
            printf("%d",queue[i]);
            i = (i+1)%size;
        }
    }
}

void main(){
    int r;
    do {
        printf("\nEnter the choice :\n 1.Create a queue\n 2.Insert data (Enqueue)\n 3.Delete data (Dequeue)\n 4.Display\n 5.Exit : ");
        scanf("%d",&r);
        switch(r){
            case 1: create();
            break;

            case 2: enqueue();
            break;

            case 3: dequeue();
            break;

            case 4: display();
            break;

            case 5: exit(0);
            break;

            default : printf("***INVALID CHOICE***");
        }
    } while(r!=0);
}