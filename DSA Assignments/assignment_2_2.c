#include<stdio.h>
#include<string.h>

#define size 50

char stack[size];
char name[size];
char rev[size];

int top = -1;
int count = 0;

void push(char x){
    if (top==size-1){
        printf("The stack is Overflowed .....\n");
    } else {
        top ++;
        stack[top] = x;
    }
}

void pop(){
    if(top==-1){
        printf("The stack is underflowed.....\n");
    } else {
        rev[count] = stack[top];
        top--;
        count++;
    }
}

int main(){
    int i;
    printf("--> Enter the string : ");
    gets(name);
    
    for(i=0;i<strlen(name);i++){
        push(name[i]);
    }
    for(i=0;i<strlen(name);i++){
        pop();
    }
    printf("-->The reversed string is : ");
    for (i=0;i<strlen(name);i++){
        printf("%c",rev[i]);
    }
    printf("\n");
}