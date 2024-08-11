//Implementaion of circular queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void create(){
    int size;
    printf("How many element you want to insert in queue: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(front == NULL && rear == NULL){
        front = rear = newnode;
        rear->next = front;
        } else {
        rear->next = newnode;
        rear = newnode;
        newnode->next = front;
        }
    }
}

void enqueue(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
        rear->next = front;
    } else {
        rear->next = newnode;
        rear = newnode;
        newnode->next = front;
    }
}

void dequeue(){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("The queue is Empty");
    } else if (front == rear){
        printf("The data which got removed is : %d",front->data);
        front = rear = NULL;
    } else {
        printf("The data which got removed is : %d",front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("The queue is Empty");
    } else {
        printf("The circular queue is : ");
        while(temp->next!=front){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("%d\t",temp->data);
    }
}

void main(){
    int x;
    do{
        printf("\nEnter the choice :\n 1.Create queue\n 2.Insert in queue(ENQUEUE)\n 3.Delete from queue(DEQUEUE)\n 4.Display\n 5.Exit : ");
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

            case 5: exit(0);
            break;

            default : printf("***INVALID CHOICE***");
        }
    } while(x!=0);
}