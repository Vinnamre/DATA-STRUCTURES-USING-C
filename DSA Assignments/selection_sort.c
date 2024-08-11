#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int i , j ,n, temp;
  
int arr[MAX];


int* selection_sort(int a[],int n){
	for (i=0;i<n;i++){
	 int	min =i;
	 for (j=i+1;j<n;j++){
	 	
	 	if (a[j]<a[min]){
	 		min=j;
		 }
	 	
	 
	 }
	 if (min!=i){
	 	
	 	//swapping a[i] and a[min]
	 	temp= a[i];
	 	a[i]=a[min];
	 	a[min]=temp;
	 }
	
	
	}
	


return a; 
}

void print(int arr[],int n){
	

for (i=0;i<n;i++){
	
	printf("%d\t",arr[i]);
}
	
	
}

int main (){
printf("**Selection Sorting Happening**\n");
printf("Enter the size of the array : \n");
scanf("%d",&n);
 for (i=0;i<n;i++){
	printf("Enter the value at %d : ",i);
	scanf("%d",&arr[i]);
	
}

printf("\nArray before sorting :\n");

print(arr,n);

int *res=selection_sort(arr,n);
printf("\nArray after sorting :\n");
print(res,n);
return 0;
	
}