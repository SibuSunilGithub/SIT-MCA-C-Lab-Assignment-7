/*
Star Pattern

*
* *
* * *
* * * *
* * * * *

Number Pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>
int main()
{
    printf("******* Star Pattern *******\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // For Number Pattern
    printf("***** Number Pattern ******\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}