#include "library.h"
#include "partition.h"
#include "swap.h"
#include <string.h>


int partition(struct Library arr[], int low, int high)
    
{
    char pivot[100];
    
    strcpy(pivot, arr[high].book_name);
    
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
        
    {
        if (strcasecmp(arr[j].book_name, pivot) < 0)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
        
    }
    
    swap(&arr[i + 1], &arr[high]);
    
    return (i + 1);
}
