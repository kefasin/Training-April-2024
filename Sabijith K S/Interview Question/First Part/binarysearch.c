#include "library.h"
#include "binarysearch.h"
#include <string.h>


int binarySearch(struct Library arr[], int low, int high, char *search_name)

{
    
    while (low <= high)
        
    {
        int mid = low + (high - low) / 2;

        
        if (strcasecmp(arr[mid].book_name, search_name) == 0)
            return mid;

        
        if (strcasecmp(arr[mid].book_name, search_name) < 0)
            low = mid + 1;

        
        else
            high = mid - 1;
    }

   
    return -1;
}
