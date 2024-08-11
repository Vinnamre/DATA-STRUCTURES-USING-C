// implementation of the stack using linked list

#include<stdio.h>
#include<Stdlib.h>

struct node {
    int data;
    struct node * link;
};
struct node * top = 0;

void push(int x){
    struct node * newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> link = top;
    top = newnode;
}

void display(){
    struct node * temp;
    temp = top;
    if (top==NULL){
        printf("THE STACK IS EMPTY\n");
    } else {
        while (temp!=0){
            printf("The element in stack are : %d\n",temp->data);
            temp = temp->link;
        }
    }
}

void peek(){
    if (top==NULL){
        printf("The stack is empty\n");
    } else {
        printf("%d\n",top->data);
    }
}

void pop(){
    struct node * temp;
    temp = top;
    if(top=NULL){
        printf("UNDERFLOW STATEMENT\n");
    } else {
        printf("The element which popped is %d ",top->data);
        top = top->link;
        free(temp);
    }
}

void main(){
    push(3);
    push(5);
    push(10);
    display();
    peek();
    push(15);
    display();
    pop();
    pop();
    display();
}