#include "partition.h"
#include "elementswap.h"


int partition(int array[],int low, int high)
{
    
    int pivot=array[high];
    int i=(low-1);

    for(int j=low;j<=high-1;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            element_swap(&array[i],&array[j]);
        }
    }

    element_swap(&array[i+1],&array[high]);

    return(i+1);
}
