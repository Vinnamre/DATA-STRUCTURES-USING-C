// program for the deletion of the element in an array 

#include<stdio.h>
int main (){
    // here the declaration of the array 
    int arr[10],size,i,response,pos,item;
    printf("Enter the size of the element : ");
    scanf("%d",&size);

    if (size>10) {
        printf("**INVALID INPUT**");
    } 
    else {
        printf("Enter the elements : ");
        for (i=0;i<size;i++) {
            scanf("%d",&arr[i]);
        }
        // if user want the element to be deleted or not that condition 
        printf("do you want to delete elements from the array/n enter 1 for yes & 0 or no : ");
        scanf("%d",&response);
        if(response == 1){

            // asking from the user for the position of the element to be deleted 
            printf("Enter the position of the element you want to delete :");
            scanf("%d",&pos);

            // here a variable is declared for the item to be deleted 
            item = arr[pos-1];

            // for loop begins 
            for (i=pos-1;i<size-1;i++){
                arr[i] = arr[i+1];
            }

            // size of the array is getting reduced 
            size -- ;

            // traversal of the array is happening
            printf("the elements of the array are : ");
            for (i=0;i<size;i++){
                printf("%d\n",arr[i]);
            }
            // to print the item which is deleted 
            printf("the deleted element from the array is : %d",item);
        } else {

            //again the traversal of the array is happening
            printf("the elements of the array are :");
            for (i=0;i<size;i++){
                printf("%d\n",arr[i]);
            }
        }
    }
}