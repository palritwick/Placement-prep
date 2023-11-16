#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0, y=0;
    char c = 'R';
    int distance = 10;
    while(n){
        switch (c)
        {
        case 'R':
            x += distance;
            distance += 10;
            c = 'U';
            break;
        case 'U' :
            y += distance;
            distance += 10;
            c = 'L';
            break;
        case 'L':
            x -= distance;
            distance += 10;
            c = 'D';
            break;
        case 'D':
            y -= distance;
            distance += 10;
            c = 'A';
            break;
        case 'A':
            x += distance;
            distance += 10;
            c = 'R';
            break;
        }
        n--;
    }
    printf("%d %d", x,y);
    return 0;
}