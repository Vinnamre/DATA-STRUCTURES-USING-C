// declaration off array at run time or dynamically and traversing of the elments

#include<stdio.h>

int main(){
    // the integer datatype is defined for the arr , size and i variable arr[] is syntax for inializing array
    int arr[50], size , i ;

    // print statement and scan statement is used for size variable 
    printf("Enter the size of the array :");
    scanf("%d",&size);

    // again print and scan is used for entering elements 
    printf("Enter the elements of the array :");

    // for loop is started here i = index , size  = entered size of the array 
    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    // print function for printing elements
    printf("the elements of the array is :");

    // for loop for traversal/displaying  of the elements
    for (i=0;i<size;i++) {
        printf("%d\n",arr[i]);
    }
}