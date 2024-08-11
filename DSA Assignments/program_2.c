// PROGRAM TO REMOVE DUPLICATE ELEMENTS FROM THE ARRAY AND DISPLAY THE EDITED ARRAY

#include<stdio.h>
#define len 50

int main(){
    int arr[len],size,i,j,k;
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
    printf("Checking for the any duplicate elements ......\n");
    for (i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                printf("The duplicate element which is removed '%d'.\n",arr[j]);
                for(k=j;k<size;k++){
                    arr[k] = arr[k+1];
                }
                j--;
                size--;
            }
        }
    }
    printf("The array is : \n");
    for(i=0;i<size;i++){
        printf("The element at %d = %d\n",i,arr[i]);
    }


}   