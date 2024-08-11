#include<stdio.h>
#include<stdlib.h>
#define len 20

int arr[len],size,i;

void create(){
   printf("Enter the size of the array: ");
   scanf("%d",&size);
   for(i=0;i<size;i++){
      printf("Enter the element at index %d : ",i);
      scanf("%d",&arr[i]);
   }
}

void traverse(){
   printf("The array is : ");
   for(i=0;i<size;i++){
      printf("%d",arr[i]);
   }
}

void insert(){
   int pos, num;
   printf("Enter the position of the data you want to insert : ");
   scanf("%d",&pos);
   printf("ENter the data : ");
   scanf("%d",&num);
   for(i=size-1;i>=pos-1;i--){
      arr[i+1]=arr[i];
   } arr[pos-1] = num;
   size++;
}

void delete(){
   int pos, item;
   printf("Eneter the position you want to delete the data : ");
   scanf("%d",&pos);
   item = arr[pos-1];
   printf("The data which got deleted is %d",item);
   for(i=pos-1;i<size;i++){
      arr[i]=arr[i+1];
   } size -- ;
}

void search(){
   int num, found = 0;
   printf("Enter the data you want to search in the array : ");
   scanf("%d",&num);
   for(i=0;i<size;i++){
      if(arr[i]==num){
         found = 1;
         break;
      }
   }
   if(found == 1){
      printf("The element found at %d position.",i+1);
   } else {
      printf("The element does not found");
   }
}

void max(){
   int max = 0;
   for(i=0;i<size;i++){
      if(arr[i]>max){
         max = arr[i];
      }
   }
   printf("The max data of the array is : %d",max);
}

void min(){
   int min = arr[0];
   for(i=0;i<size;i++){
      if(arr[i]<min){
         min = arr[i];
      }
   }
   printf("The min data of the array is : %d",min);
}