// implementation of 2d array

#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    printf("Enter the elements of the array : ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements of the array is : ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }
}