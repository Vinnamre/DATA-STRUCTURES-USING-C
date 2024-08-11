// DSA BUBBLE SORT
#include <stdio.h>

int main() {
    int i,n,j,temp,flag;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter elements in array at %d:",i);
        scanf("%d",&a[i]);
    }
   
    for(i=1;i<n;i++){
        temp = a[i];
        j = i -1;
        while( j >= 0 && a[j]>temp){
            a[j+1] = a[j];
            j--; 
        }
        a[j+1] = temp;
    }
    

    printf("The sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
   
    return 0;
}