// program to perform operation in an array (almost all)

#include<stdio.h>
#include<stdlib.h>
#define len 20

int arr[len],size,i;

void create(){
    print("Enter the size of the array : ");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("value of elements at %d : ",arr[i]);
        scanf("%d",&arr[i]);
    }
}

int print(){
    printf("The array is : \n");
    for (i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

void insertatspec(){
    int num, pos;
    printf("enter the position at which you want to insert at a position : ");
    scanf("%d",&pos);

    printf("enter the value : ");
    scanf("%d",&num);

    for(i=size-1;i>=pos-1;i--){
        arr[i+1] =arr[i];
    } arr[pos-1]=num;
    size ++;
}

void insertatbeg(){
    int num;
    printf("Enter the element you want to insert at begining : ");
    scanf("%d",&num);
    for(i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    } arr[0]=num;
    size++;
}

void insertatend(){
    int num;
    printf("Enter the element you want to insert at end : ");
    scanf("%d",&num);
    arr[size]=num;
    size++;
}

void delatspec(){
    int pos;
    printf("Enter the position of the element  you want to delete : ");
    scanf("%d",&pos);
    for(i=pos-1;i<=size-1;i++){
        arr[i] = arr[i+1];
    } size--;
}

void delatbeg(){
    for (i=0;i<=size-1;i++)
    arr[i]=arr[i+1];
    size--;
}

void delatlast(){
    arr[size-1]=0;
    size--;
}

void search(){
    int num;
    printf("Enter th element you want to search : ");
    for ()
}