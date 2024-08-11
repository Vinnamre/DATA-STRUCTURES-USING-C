#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    } else {
        return 0;
    }
}

int isfull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    } else {
        return 0;
    }
}

void push(struct stack *ptr, int val){
    int i;
    for (i=0;i<ptr->size;i++){
    if(isfull(ptr)){
        printf("stack overflow! cannot push %d to the stack \n",val);
    } else {
        ptr -> top++;
        ptr -> arr[ptr->top]=val;
    }
    }
}   


int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow cannot pop rom the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Stack has been created successfully\n");
    push();

    return 0;
}