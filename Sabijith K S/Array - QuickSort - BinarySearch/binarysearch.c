#include "binarysearch.h"

int binary_search(int array[],int left,int right,int target)
{
    while(left<=right)

    {
       int mid = left + (right-left)/2;

       if(array[mid]==target)
        {
            return mid;
        }

       else if (array[mid]<target)
        {
            left=mid+1;
        }

       else
        {
            right=mid-1;

        }
       
    }
    return -1;
}
