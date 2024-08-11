// implementation of stack using array

#include<stdio.h>
#define len 10

int stack[len];
int top = -1;

void push(){
   int x;
   printf("enter the data : ");
   scanf("%d",&x);
   if (top==len-1){
      printf("Overflow Condition\n");
   } else {
      top ++;
      stack[top] = x;
   }
}

void pop(){
   int item;
   if (top==-1){
      printf("underflow condition\n");
   } else {
      item = stack[top];
      top--;
      printf("The popped value from stack is %d\n",item);
   }
}

void peek(){
   if (top==-1){
      printf("Stack is Empty\n");
   } else {
      printf("The top element in stack is %d\n",stack[top]);
   }
}

void display(){
   int i;
   for (i=top;i>=0;i--){
      printf("The elements in stack are %d\n",stack[i]);
   }
}

   int r;
   do {
      printf("Enter choice : 1:Push 2:Pop 3:Peek 4:Display : ");
      scanf("%d",&r);
      switch(r){
         case 1: push();
         break;

         case 2: pop();
         break;

         case 3: peek();
         break;

         case 4: display();
         break;

         default : printf("INVALID CHOICE");
      } 
   } while (r != 0);
}