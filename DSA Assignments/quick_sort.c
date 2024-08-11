#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int i , j ,n, temp;
  
int arr[MAX];

int partition(int a[],int lb,int ub){
	
	int pivot =a[lb];
	int start= lb;
	int end =ub;
	
while(start<end){
     while(a[start]<=pivot){
     	start++;
	 }		
	 while(a[end]>pivot){
	 	end--;
	 }
	 if (start<end){
	 	//swaping in a[start] and a[end]
	 	 temp= a[start];
	 	 a[start]= a[end];
	 	 a[end]=temp;
	 	
	 }		
	}
    	temp= a[lb];
	 	 a[lb]= a[end];
	 	 a[end]=temp;

return end;
	
	
}

int* quick_sort(int A[],int lb,int ub){

 if (lb<ub){	 
 int loc =partition(A,lb,ub);
  quick_sort(A,lb,loc-1);
  quick_sort(A,loc+1,ub);
  
 }


return A; 
}

void print(int arr[],int n){
	

for (i=0;i<n;i++){
	
	printf("%d\t",arr[i]);
}
	
	
}

int main (){
printf("**Quick Sort happening**\n");
printf("Enter the size of array : \n");
scanf("%d",&n);
 for (i=0;i<n;i++){
	printf("Enter the value at %d : \n",i);
	scanf("%d",&arr[i]);
	
}

printf("\nArray before sorting :\n");

print(arr,n);

int *res=quick_sort(arr,0,n-1);
printf("\nArray after sorting :\n");
print(res,n);
return 0;
	
}