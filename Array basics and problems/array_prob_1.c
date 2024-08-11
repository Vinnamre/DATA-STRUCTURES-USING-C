// program to search an element inside of array 

#include<stdio.h>

int main(){
    int arr[10],i,size,ele,found;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("Enter the elements of the array : ");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    found = 0;
    printf("Enter the element you want to search : ");
    scanf("%d",&ele);

    for (i=0;i<size;i++){
        if(arr[i]==ele){
            found = 1;
            break;
        }
    }
    if (found==1){
        printf("%d element found at %d position",ele,i+1);
    } else {
        printf("Element not found");
    }
}