//implementation of array using pointers

#include<stdio.h>
int main(){
    int arr[10],size,i,pos,response,num,item;
    int *p = arr;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    if (size>10){
        printf("**INVALID INPUT **");
    } else {
        printf("Enter the elements of the array : ");
        for (i=0;i<size;i++){
            scanf("%d",(arr+i));
        }
        printf("Do you want to add more element to the array // enter 1(yes)/0(No) : ");
        scanf("%d",&response);
        if (response==1){
            printf("Enter the position at which you want to insert an element : ");
            scanf("%d",&pos);
            printf("Enter the value of the element : ");
            scanf("%d",&num);
            for (i=size-1;i>=pos-1;i--){
                arr[i+1] = arr[i];
            }
            arr[pos-1] = num;
            size++;
            printf("if you want to delete any element from the array // enter 1(yes)/0(no) : ");
            scanf("%d",&response);
            if (response==1){
                printf("enter the position of the element you want to delete : ");
                scanf("%d",&pos);
                item = arr[pos-1];
                for (i=pos-1;i<size-1;i++){
                    arr[i] = arr[i+1];
                }
                size--;
                printf("The elements of the array are : ");
                for (i=0;i<size;i++){
                    printf("%d\n",*p+i);
                } 

                } else {
                    printf("The elements of the array are : ");
                    for (i=0;i<size;i++){
                        printf("%d\n",*p+i);
                    }
                }

            } else {
                printf("The elements of the array are : ");
                for (i=0;i<size;i++){
                    printf("%d\n",*p+i);
                }
            }
        }
    }
