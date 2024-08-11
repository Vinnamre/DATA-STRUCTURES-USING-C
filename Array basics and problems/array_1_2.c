//insertion of element at specific position in an array

#include<stdio.h>

int main(){

    // variables are diclared for integer data type
    int arr[20],size,i,num,pos;
    printf("Enter the size of the array :");
    scanf("%d",&size);

    // if statement if size of the max size of the array succeeded
    if (size>20) {
        printf("***Array is overflowed***");

    }
    else {
        // loop for entering the elements in the array
        printf("Enter the elements of the array : ");
        for (i=0;i<size;i++) {
            scanf("%d",&arr[i]);
        }
    
    //value of the new element which is to be inserted 
     printf("Enter the new element : ");
     scanf("%d",&num);
    
    // here position on which new element is to be entered is given
     printf("Enter the position on which new element is to be inserted :");
     scanf("%d",&pos);
    
    /* for loop for displacing the elements and here loop starts from the last element where index of the array 
     should be either greater or equal to position index value */
     for (i=size-1;i>=pos-1;i--) {

        //elements of the array are being displaced
        arr[i+1] = arr[i];
     }

     // new element is being entered at the given position 
     arr[pos-1] = num;

     // size of the array is increased by one
     size ++;
     

     // statement and loop for the travesal of the array 
     printf("the elements of the array are :");
     for (i=0;i<size;i++) {
        printf("%d\n",arr[i]);
     }
    }
}