// program to find the tranpose of the matrix

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a [10][10], t[10][10] , i , j ,r ,c ;

    printf("Enter the order of the matrix : ");
    scanf("%d %d",&r,&c);

    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\n Enter the value a[%d][%d] : ",i,j );
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n The entered matrix is : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
            if(j==c-1){
                printf("\n");
            }        
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[j][i]=a[i][j];
        }
    }

    printf("The tranpose of the matrix is : \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",t[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
}