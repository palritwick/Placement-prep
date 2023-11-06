#include <stdio.h>
int differenceOfSum(int n, int m){
    int s_div = 0;
    int s_othr = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
            s_div += i;
        else
            s_othr += i;
    }
    int diff = s_othr-s_div;
    if(diff >= 0 )
        return diff;
    return (-diff);
}
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
   
    printf("%d\n",differenceOfSum(n,m));
    return 0;
}