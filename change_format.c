// String with a Twist
// The program will receive 3 English words inputs from STDIN
// 1.These three words will be read one at a time in three separate line
// 2.The first word should be changed like all vowels should be replaced by %
// 3.The second word should be changed like all consonants should be replaced by #
// 4.The third word should be changed like all char should be converted to upper case
// Then concatenate the three words and print them
// For example if your input is "how are you" then output should be h%wa#eYOU

#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10], c[10];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    int m = strlen(a);
    int n = strlen(b);
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            a[i] = '%';
    }
    for (int j = 0; j < n; j++)
    {
        if (b[j] != 'a' && b[j] != 'e' && b[j] != 'i' && b[j] != 'o' && b[j] != 'u')
            b[j] = '#';
    }
    while (c[p] != '\0')
    {
        if (c[p] >= 'a' && c[p] <= 'z')
            c[p] = c[p] - 32;
        p++;
    }
    printf("%s%s%s\n", a, b, c);

    return 0;
}