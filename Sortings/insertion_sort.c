#include<stdio.h>

void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);	
	}
	printf("\n");
}

void insertionSort(int *A, int n)
{
	int key, j;
	for(int i =1; i<= n-1;i++)  // for the no. of pass
	{
		key = A[i];
		j = i-1;
		
		while(j>=0 && A[j] > key)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}

int main()
{
	int A[] = {1,5,4,7,8,2};
	int n = 6;
	printf("Before sorting \n");
	printArray(A,n);      // printing array before sort
	insertionSort(A, n);
	printf("After sorting \n");
	printArray(A,n);      // printing array after sort
	
	return 0;
}
