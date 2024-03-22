#include<stdio.h>

void BubbleSort(int *A, int n)
{
	int temp ;
	for(int i = 0; i< n-1 ; i++) // for the no. of pass
	{
		// printf("Working on pass no. %d\n", i+1);
		for(int j =0; j <n-1-i; j++)  // for comparision in each pass
		{
			if(A[j] > A[j +1])
			{
				temp = A[j];  // swaping
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);	
	}
	printf("\n");
}


int main()
{
	int A[] = {1,5,4,7,8,2};
	int n = 6;
	
	printArray(A,n); // printing array before sort
	printf("\n");
	BubbleSort(A,n);
	printf("\n");
	printArray(A,n) ; // printing array after sort
	
	return 0;
}
