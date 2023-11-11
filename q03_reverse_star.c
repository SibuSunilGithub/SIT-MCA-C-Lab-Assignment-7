/*
Star Pattern

* * * * *
* * * *
* * *
* *
*

Number Pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <stdio.h>
int main()
{
    printf("******* Star Pattern ********\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("******** Number Pattern ********\n\n");
    for (int i = 0; i < 5; i++)
    {
        int s = 1;
        for (int j = 5; j > i; j--)
        {
            printf("%d ", s);
            s = s+1;
        }
        
        printf("\n");
    }
    return 0;
}