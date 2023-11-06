#include <stdio.h>

int LargeSmallSum(int arr[], int length)
{
    if (length <= 3)
        return 0;

    int evenPos[100], oddPos[100];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
            evenPos[evenCount++] = arr[i];
        else
            oddPos[oddCount++] = arr[i];
    }

    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = 0; j < evenCount - i - 1; j++)
        {
            if (evenPos[j] < evenPos[j + 1])
            {
                int temp = evenPos[j];
                evenPos[j] = evenPos[j + 1];
                evenPos[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < oddCount - 1; i++)
    {
        for (int j = 0; j < oddCount - i - 1; j++)
        {
            if (oddPos[j] > oddPos[j + 1])
            {
                int temp = oddPos[j];
                oddPos[j] = oddPos[j + 1];
                oddPos[j + 1] = temp;
            }
        }
    }

    return evenPos[1] + oddPos[1];
}

int main()
{
    int arr[] = {1,8,0,2,3,5,6};
    int length = sizeof(arr) / sizeof(int);

    int result = LargeSmallSum(arr, length);
    printf("%d\n", result);

    return 0;
}