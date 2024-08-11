/* Menu driven program to do ollowing operations on the stack 
push(), pop(), isEmpty(), isfull , display and peek*/

#include<stdio.h>
#define len 10

int stack[len];
int top = -1;

void isEmpty(){
    if(top == -1){
        printf("Stack is empty\n");
    } else {
        printf("The stack is not empty\n");
    }
}

void isfull(){
    if(top == len-1){
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }
}

void push(){
    int x;
    printf("Enter the data : ");
    scanf("%d",&x);
    top ++;
    stack[top] = x;
}

void pop(){
    int item ;
    item = stack[top];
    top--;
    printf("The element which got popped is : %d\n",item);
}

void peek(){
    if(top == -1){
        printf("The atack is empty");
    } else {
        printf("The top element in stack is : %d\n",stack[top]);
    }
}

void display(){
    int i ;
    printf("The element in the stack are : \n");
    for (i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
}

void main(){
    int ch;
    do {
        printf("\nEnter the choice :\n 1.Push \t 2.Pop \t 3.Check if the stack is empty\t 4.check whether the stack is Full\t 5.Display\t 6.peek\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: isEmpty();
            break;

            case 4: isfull();
            break;

            case 5: display();
            break;

            case 6: peek();
            break;

            default: printf("INVALID CHOICE");
        }
    } while(ch!=0);
}

