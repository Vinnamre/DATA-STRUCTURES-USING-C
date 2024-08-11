// Implementing queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void create() {
    int size;
    printf("\nHow many element you want to enter in queue : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(front == NULL && rear == NULL){
        front = rear = newnode;
        } else {
        rear->next = newnode;
        rear = newnode;
        }
    }
}

void enqueue(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(front == NULL && rear == NULL){
        front = rear = newnode;
        } else {
        rear->next = newnode;
        rear = newnode;
        }
}

void dequeue(){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("\nThe queue is empty");
    } else if (front == rear){
        printf("\nThe data which got removed is : %d",front->data);
        front = rear = NULL;
        free(temp);
    } else {
        printf("\nThe data which got removed is : %d",front->data);
        front = front->next;
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("\nThe queue is empty");
    } else {
        printf("\nThe queue is : ");
        while(temp!=rear){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
    }
}

void peek(){
    if(front == NULL && rear == NULL){
        printf("\nThe queue is Empty");
    } else {
        printf("\nThe peek of the queue is : %d",front->data);
    }
}

void main(){
    int x;
    do{
        printf("\nEnter the choice :\n 1.Create queue\n 2.Insert in queue(ENQUEUE)\n 3.|Delete from queue(DEQUEUE)\n 4.Display\n 5.Peek\n 6.Exit : ");
        scanf("%d",&x);
        switch(x){

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
    } while(x!=0);
}