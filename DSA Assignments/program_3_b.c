// program to find out the multiplication of the matrix

#include<stdio.h>
#include<stdlib.h>

int a [3][3];
int b [3][3];
int result [3][3];
int i , j , k;

void creation_a(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value in 'A' matrix at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void creation_b(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value in 'B' matrix at [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
}

void mult(){
    int sum = 0;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum = sum + a[i][k]*b[k][j];
            }
            result [i][j] = sum;
            sum = 0;
        }
    }
    // to display the result 

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
    }
}

int main(){
    creation_a();
    creation_b();

    printf("The multiplication of the matrix A and B : \n");
    mult();

    return 0;
}