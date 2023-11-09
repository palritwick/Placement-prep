#include <stdio.h>
// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 … Find the 11th term of the series.
int main()
{
    int n, a, b;
    printf("Enter the term you want to see : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == 1) a = 1;
            else a *= 2;
        }
        else
        {
            if (i == 2) b = 1;
            else b *= 3;
        }
    }
    if (n % 2 != 0)
        printf("%d term of the series is %d\n", n, a);
    else printf("%d term of the series is %d\n", n, b);
    return 0;
}