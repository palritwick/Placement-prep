#include<stdio.h>

int main()
{
    int n, res=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
        res = res*(n%10);
        n = n/10;
    }
    printf("Multiplication of all digits of the number is %d\n",res);
    return 0;
}