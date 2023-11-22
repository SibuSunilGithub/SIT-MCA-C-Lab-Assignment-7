/*

1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
int main()
{
    int s = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", s);
            s += 1;
        }
        printf("\n");
    }

printf("\n-----------\n\n");

    char c = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c += 1;
        }
        printf("\n");
    }
}