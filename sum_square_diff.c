#include<stdio.h>

int main()
{
    int n1; // n1 for first test case, i.e. n1 = 3
    scanf("%d",&n1);
    printf("%d\n",n1);
    
    int sum = 0;
    int sum2 = 0;
    for (int i = 1; i <= n1; i++)
        sum += i;
    int sq_of_sum = sum*sum ;

    for (int i = 1; i <= n1; i++)
        sum2 += (i*i);
    int sum_of_sq = sum2;

    int diff = sq_of_sum - sum_of_sq;
    printf("Diff is %d\n",diff);
    return 0;
}