#include <stdio.h>

// Utility function to swap values at two indices in an array
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// Recursive function to perform selection sort on subarray `arr[i…n-1]`
void selectionSort(int arr[], int i, int n)
{
	// find the minimum element in the unsorted subarray `[i…n-1]`
	// and swap it with `arr[i]`
	int min = i;
	int j;
	for ( j = i + 1; j < n; j++)
	{
		// if `arr[j]` is less, then it is the new minimum
		if (arr[j] < arr[min]) {
			min = j;	// update the index of minimum element
		}
	}

	// swap the minimum element in subarray `arr[i…n-1]` with `arr[i]`
	swap(arr, min, i);

	if (i + 1 < n) {
		selectionSort(arr, i + 1, n);
	}
}

// Function to print `n` elements of array `arr`

int main()
{
	int arr[10],n,i,j;
	printf("Enter the no.of elements");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements before sorting are ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
	selectionSort(arr,0,n);
	printf("The elemets after sorting are");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
