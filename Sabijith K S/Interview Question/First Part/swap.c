#include "library.h"
#include "swap.h"

void swap(struct Library *a, struct Library *b)
    
{
    struct Library temp = *a;
    *a = *b;
    *b = temp;
}
