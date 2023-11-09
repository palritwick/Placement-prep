#include <stdio.h>
int main()
{
    long long n;
    //printf("Enter value of n =");
    scanf("%lld", &n);
    long long a[n], i;
    printf("Entering the array elements - \n");
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long sum = 0, count = 0, max = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            sum += a[i];
            count++;
        }
        else
        {
            if (max > a[i] || max == 0)
            {
                max = a[i];
            }
        }
    }
    if (sum == 0)
    {
        sum = max;
        count = 1;
    }
    printf("%lld %lld\n", sum, count);

    return 0;
}