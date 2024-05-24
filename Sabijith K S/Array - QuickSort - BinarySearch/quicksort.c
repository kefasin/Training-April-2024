#include "quicksort.h"
#include "partition.h"

void quick_sort(int array[],int low,int high)
{
    int pivot;
    
    if(low<high)
    {
        pivot=partition(array,low,high);
        quick_sort(array,low,pivot-1);
        quick_sort(array,pivot+1,high);
    }
    
}


