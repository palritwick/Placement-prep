#include <stdio.h>
int availability(int r, int unit, int n, int arr[])
{
    int amount = r * unit;
    if (n == 0)
        return -1;
    int foodTillNow = 0;
    int house = 0;
    for (house = 0; house < n; house++)
    {
        foodTillNow += arr[house];
        if (foodTillNow >= amount)
            break;
        continue;
    }
    if (amount > foodTillNow)
        return 0;
    return house + 1;
}
int main()
{
    int r, unit, n;
    int arr[n];
    scanf("%d", &r);            // 7
    scanf("%d", &unit);         // 2
    scanf("%d", &n);            // 8
    for (int i = 0; i < n; i++) // 2 8 3 5 7 4 1 2
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", availability(r, unit, n, arr));
    return 0;
}