#include <stdlib.h>
#include <stdio.h>
#include "printarray.h"
#include "arraygenerator.h"



void array_generator(int length, int array[])
{
    for(int i = 0; i < length; i++)
    {
        array[i] = (rand() % 10000) + 1;
    }
    
    printf("Array : ");
    print_array(array,length);
    printf("\n\n");
}
