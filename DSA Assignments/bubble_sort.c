#include<Stdio.h>
#define len 20

int arr[len], size, i ,j;

void bubble_sort(){
    int flag , temp;
    for(i=0;i<size-1;i++){
        flag = 0;
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}

int main(){
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the value %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The Unsorted array is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nBubble sort is happening .....\n");
    bubble_sort();
    printf("The sorted array is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}