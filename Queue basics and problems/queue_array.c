// Implementation of the queue using array

#include<stdio.h>
#include<stdlib.h>
#define len 20

int queue[len],size;
int front = -1;
int rear = -1;

void enqueue(){
    if(rear==size-1){
        printf("\nThe queue is Full (OVERFLOW)");
    } else if (front == -1 && rear == -1){
        front = rear = 0;
        printf("\nEnter the data : ");
        scanf("%d",&queue[rear]);
    } else {
        rear ++;
        printf("\nEnter the data : ");
        scanf("%d",&queue[rear]);
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("\nThe queue is Empty (UNDERFLOW)");
    } else if (front==rear){
        printf("\nThe data which got removed is : %d",queue[front]);
        front = rear = -1;
    } else {
        printf("\nThe data which got removed is : %d",queue[front]);
        front++;
    }
}

void display(){
    if (front == -1 && rear == -1){
        printf("\nThe queue is Empty");
    } else {
        printf("\nThe queue is : ");
        for(int i = front; i<size; i++){
            printf("%d\t",queue[i]);
        }
    }
}

void peek(){
    if(front == -1 && rear == -1){
        printf("\nThe queue is Empty");
    } else {
        printf("\nThe peek of the queue is : %d",queue[front]);
    }
}

void create(){
    printf("\nEnter the size of the queue : ");
    scanf("%d",&size);
}

void main(){
    int r;
    do {
        printf("\nEnter the choice :\n 1.Create a queue\n 2.Insert data (Enqueue)\n 3.Delete data (Dequeue)\n 4.Display\n 5.Peek\n 6.Exit : ");
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

            case 5: peek();
            break;

            case 6: exit(0);
            break;

            default : printf("***INVALID CHOICE***");
        }
    } while(r!=0);
}