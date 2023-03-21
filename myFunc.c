#include <stdio.h>
#include "myFunc.h"

void print_array(int* ar)
{
    for (int i = 0; i < 100; ++i)
    {
        if (i == 0)
        {
            printf("%d ", ar[i]);
        }
        else if (i != 0 && i % 10)
        {
            printf("%d ", ar[i]);
        }
        else
        {
            printf("%d\n", ar[i]);
        }
    }

    printf("\n");
}