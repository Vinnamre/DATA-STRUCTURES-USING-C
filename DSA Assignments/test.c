// Optimized implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


void bubbleSort(int arr[], int n)
{
	int i, j, item, comp;
    item = 0;
	comp = 0;

	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
				comp++;
                
			}
            item++;
		}

		if (swapped == false)
			break;
        
	}
    printf("The comparison has happened %d times.\n",item);
	printf("The swapping has happened %d times.\n",comp);
    
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}


int main()
{
	int arr[] = { 10, 89, 95, 67, 29, 27, 33, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
