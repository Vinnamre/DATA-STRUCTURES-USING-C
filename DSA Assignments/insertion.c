#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int i , j ,n, temp;
  
int arr[MAX];


int* insertion_sort(int a[],int n){
	
for (i=1;i<n;i++){
	temp=a[i];
	j = i-1;
	
while(j>=0&&a[j]>temp){
	
	//Swapping
	 a[j+1]= a[j];
	 j--;
	
}

a[j+1]=temp;
	
	
}

return a; 
}

void print(int arr[],int n){
	

for (i=0;i<n;i++){
	
	printf("%d\t",arr[i]);
}
	
	
}

int main (){
printf("***Insertion Sorting Happening***\n");
printf("Enter the size of the array : \n");
scanf("%d",&n);
printf("Enter the value : \n");
 for (i=0;i<n;i++){
	
	scanf("%d",&arr[i]);
	
}

printf("\nArray before sorting :\n");

print(arr,n);


int *res=insertion_sort(arr,n);
printf("\nArray after sorting :\n");
print(res,n);

return 0;
	
}