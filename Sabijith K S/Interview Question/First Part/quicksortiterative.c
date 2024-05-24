#include "library.h"
#include "quicksortiterative.h"
#include "partition.h"

void quickSortIterative(struct Library arr[], int low, int high)
    
{
    
    struct StackFrame stack[high - low + 1];
    int top = -1;

    
    stack[++top].low = low;
    stack[top].high = high;

    
    while (top >= 0)
        
    {
        
        low = stack[top].low;
        high = stack[top--].high;

        
        int pi = partition(arr, low, high);

        
        if (pi - 1 > low)
        {
            stack[++top].low = low;
            stack[top].high = pi - 1;
        }

        
        if (pi + 1 < high)
        {
            stack[++top].low = pi + 1;
            stack[top].high = high;
        }
        
    }
}
