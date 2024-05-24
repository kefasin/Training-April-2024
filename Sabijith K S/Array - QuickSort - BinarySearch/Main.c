#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "arraygenerator.h"
#include "quicksort.h"
#include "printarray.h"
#include "binarysearch.h"


void main()
    
{
    int array_length, array[10000], element;
    char option;
    int search_result;
    
    printf("\nEnter Length Of The Array : ");
    scanf("%d", &array_length);
    
    srand(time(NULL));
    
    array_generator(array_length, array);
    quick_sort(array,0,array_length-1);
    
    printf("Array After Quick Sorting : ");
    print_array(array,array_length);
    printf("\n\n");
   
    do
    {
        printf("Enter Element To Be Searched : ");
        scanf("%d",&element);
        
        search_result= binary_search(array,0,array_length-1,element);
        
        if(search_result != -1)
        {
          printf("Element %d Found At Index %d. \n",element,search_result);
        }
        
        else
        {
          printf("Element %d Not Found \n",element);
        }
        
        printf("\nDo You Want To Search Again (y/n) : ");
        while((getchar())!='\n');
        scanf("%c",&option);
        printf("\n");
        
    } while(option!='n');
}



