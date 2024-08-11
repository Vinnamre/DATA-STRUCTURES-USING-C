// PROGRAM TO REVERSE AN ARRAY ELEMENTS

#include<stdio.h>
#include<stdlib.h>
#define len 50

int main(){
    int arr[len],size,i,j;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    if(size>len){
        printf("The size of the array can not be greater then 50");
    } else {
        for(i=0;i<size;i++){
            printf("Enter the value of element at %d : ",i);
            scanf("%d",&arr[i]);
        }
    } 
    printf("Reversing the array......\n");
    int re_arr[len];
    for(i=0;i<size;i++){    
     re_arr[i] = arr[size-1-i];    
    }
    printf("The array is : \n");
    for(i=0;i<size;i++){
        printf("The element at %d = %d\n",i,re_arr[i]);

    }
}