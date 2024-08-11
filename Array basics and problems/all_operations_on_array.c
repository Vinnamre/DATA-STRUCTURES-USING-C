#include<stdio.h>
#include<stdlib.h>
#define len 50

int arr[len],size,i;

void create(){
    printf("Enter the size of the array : \n");
    scanf("%d",&size);
    if(size>len){
        printf("--> INVALID SIZE <--");
    } else {
        for(i=0;i<size;i++){
            printf("-> Enter the value %d : ",i);
            scanf("%d",&arr[i]);
        }
    }
}

void display(){
    printf("\nTHE array is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

void insert(){
    int pos, num;
    printf("Enter the position at which you want to insert : ");
    scanf("%d",& pos);

    printf("\nEnter the value : ");
    scanf("%d",& num);

    for(i=size-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    } arr[pos-1] = num;
    size ++;
}

void delete(){
    int pos, item;
    printf("Enter the position from which you want to delete : ");
    scanf("%d",&pos);
    item = arr[pos-1];
    printf("The element which got deleted is : %d",item);
    for(i=pos-1;i<size;i++){
        arr[i] = arr[i+1];
    } size -- ;
}

void search(){
    int num, found = 0;
    printf("Enter the number you want to search : ");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(arr[i]==num){
            found = 1;
            break;
        }
    } if (found==1){
        printf("\nElement found at %d position. ",i+1);
    } else {
        printf("\n Element not found in the array.");
    }
}

void max(){
    int max = 0;
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("The maximum element of the array is %d.",max);
}

void min(){
    int min = arr[0];
    for(i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The minimum element of the array is %d.",min);
}

int main(){
    int a;
    do{
        printf("\n-->Enter the choice :\n ->1.Create\n ->2.Display\n ->3.Insert\n ->4.delete\n ->5.search\n ->6.maximum\n ->7.minimum\n ->8.exit :");
        scanf("%d",&a);
        switch(a){
            case 1: create();
            break;

            case 2: display();
            break;

            case 3: insert();
            break;

            case 4: delete();
            break;

            case 5: search();
            break;

            case 6: max();
            break;

            case 7: min();
            break;

            case 8: exit(0);
            break;

            default: printf("***INVALID INPUT***");
            break;
        }
    } while(a != 0);
}