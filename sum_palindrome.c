// Youu have given the rows number like n = 3 
// Then the palindromic pyramid structure whould be...
//     1
//   2 1 2
// 3 2 1 2 3
// The sum of each rows are 1,5,11 respectively.
// You have to return the total sum value of each rows (1+5+11) = 17 as your answer.

// Input: 3 ;Output: 17
// Input: 2 ;Output: 6

#include<stdio.h>
int sum_palindrome(int n){
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum += (i*(i+1)-1);
    }
    return sum;
}
int main()
{
    int row;
    scanf("%d",&row);
    printf("%d",sum_palindrome(row));
    return 0;
}