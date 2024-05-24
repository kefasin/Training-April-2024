#include "printarray.h"
#include <stdio.h>

void print_array(int array[],int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        printf("%d ", array[i]);
    }
}
