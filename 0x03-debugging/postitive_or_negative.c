#include <stdlib.h>
#include <time.h>
#include <stdio.h>
postitive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
        return (0);
}

