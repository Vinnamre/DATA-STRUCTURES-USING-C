// c program to find out the saddle point in a 2d array 

#include<stdio.h>

int main(){
    int arr[10][10], m , n ,i , j,f, k,c,min,max;
    printf("Enter the order of the matrix : ");
    scanf("%d %d",&m,&n);

    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the value at '%d' '%d' : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is .....\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%5d",arr[i][j]);
            if (j==n-1){
                printf("\n");
            }
        }
    }


    for(i=0;i<m;i++){
        min = arr[i][0];
        c=0;
        for(j=0;j<n;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
                c = j;
            }
        }
        max = 0;
        for(k=0;k<m;k++){
            if(arr[k][c]>max){
                max = arr[k][c];
            }
        }
        if(min==max){
            printf("Saddle point of matrix is ... %d",max);
            f=1;
        }
    }
    if (f==0){
        printf("matrix has no saddle point.");
    }

}