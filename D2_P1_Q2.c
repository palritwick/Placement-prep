#include <stdio.h>
#include <stdlib.h>

int findCount(int n, int arr[], int num, int diff)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (abs(arr[i] - num) <= diff)
        {
            count++;
        }
    }
    return count > 0 ? count : -1;
}

int main()
{
    int n;
    scanf("%d", &n);//6
    int arr[n];// 12 3 14 56 77 13
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    scanf("%d", &num);//13
    int diff;
    scanf("%d", &diff);//2
    printf("%d\n", findCount(n, arr, num, diff));
    return 0;
}