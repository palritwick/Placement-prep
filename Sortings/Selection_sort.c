#include <stdio.h>

void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void selectionSort(int *A, int n)
{
	int indexOfMin, temp;
	printf("Running the Selection Sort...\n");
	for (int i = 0; i < n - 1; i++)
	{
		indexOfMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[indexOfMin])
			{
				indexOfMin = j;
			}
			// swaping A[i] & A[indexOfMin]

			temp = A[i];
			A[i] = A[indexOfMin];
			A[indexOfMin] = temp;
		}
	}
}

int main()
{
	int A[] = {1, 5, 4, 3, 6, 2};
	int n = 6;

	printArray(A, n); // printing array before sort
	selectionSort(A, n);
	printArray(A, n); // printing array after sort

	return 0;
}
