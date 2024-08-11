/* A MENU DRIVEN PROGRAM TO DEMONSTRATE THE FOLLOWING OPERATIONS ON ARRAY :-
1.CREATE  2.DISPLAY  3.INSERT  4.DELETE  5.SEARCH  6.EXIT  */

#include <stdio.h>
#include <stdlib.h>
#define len 50

int arr[len], size, i;

void create(){
    printf("--->Enter the size of the array : ");
    scanf("%d",&size);
    if(size>50) {
        printf("***YOU CAN NOT ENTER SIZE MORE THAN 50***");
    } else {
        for(i=0;i<size;i++){
            printf("->Enter the value of element at %d : ",i);
            scanf("%d",&arr[i]);
        }
    }
}

void display(){
    printf("--->The array you created is : \n");
    for (i=0;i<size;i++){
        printf("->The element at %d : %d\n",i,arr[i]);
    }
}

void insert(){
    int num, pos;
    printf("--->Enter the position at which you want to insert a element : ");
    scanf("%d",&pos);
    printf("--->Enter the value of element : ");
    scanf("%d",&num);

    for (i=size-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    } arr[pos-1] = num;
    size ++;
}

void delete(){
    int pos , item ;
    printf("--->Enter the position from which you want to delete an element : ");
    scanf("%d",&pos);
    item = arr[pos-1];
    printf("-->Element which got removed is : %d\n",item);
    for(i=pos-1;i<size;i++){
        arr[i] = arr[i+1];
    } size -- ;
}

void search(){
    int num,found;
    printf("--->Enter the element you want to search in array : ");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(arr[i]==num){
            found = 1;
            break;
        }
    } if(found == 1){
        printf("-->The element found at '%d' position.\n",i+1);
    } else {
        printf("***ELEMENT NOT FOUND IN ARRAY\n***");
    }
}

void main() {
    int ch;
    do {
        printf("--->Array Operations : \n 1.Create a array\t 2.Display array\t 3.Insert in array\t 4.Delete from array\t 5.Search in array\t 6.Exit\n Enter your choice : ");
        scanf("%d",&ch);
        
        switch(ch){
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

            case 6: exit(0);
            break;

            default : printf("YOU HAVE PRESSED WRONG KEY");
            break;
        }
    } while (ch!=0);
}