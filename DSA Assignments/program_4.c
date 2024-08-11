// program to find out sum of every row and column in 2d array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[10][10];
    int i,j,m,n;
    int sum = 0;

    printf("Enter the order of the matrix : \n");
    scanf("%d %d",&m,&n);

    printf("Enter the co-eicient of the matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum = sum + arr[i][j];
        }
    } 
    printf("The sum of the %d rows is '%d'. ",i,sum);

    sum = 0;
    for(j=0;j<n;j++){
        for(i==0;i<m;i++){
            sum = sum + arr[i][j];
        }
    }
    printf("The sum of the %d column is '%d'. ",i,sum);
}