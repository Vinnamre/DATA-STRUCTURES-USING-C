// Q.1 Reverse an array of the intergers

#include<stdio.h>

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    printf("The array is : \n");
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }

    printf("\n");

    printf("The array in reverse order is : \n");
    for(int i=6;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}