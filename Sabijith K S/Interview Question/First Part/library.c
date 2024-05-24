#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"
#include "quicksortiterative.h"
#include "binarysearch.h"


int main()
    

{
    
    struct Library Book[10];

    
    strcpy(Book[0].book_name, "The Great Gatsby");
    strcpy(Book[0].book_author, "Scott Fitzgerald");
    Book[0].book_holder = -1;
    Book[0].book_borrow_date = 0;
    Book[0].book_return_date = 0;

    strcpy(Book[1].book_name, "Alice In Wonderland");
    strcpy(Book[1].book_author, "Lewis Carrol");
    Book[1].book_holder = -1;
    Book[1].book_borrow_date = 0;
    Book[1].book_return_date = 0;

    strcpy(Book[2].book_name, "Time Machine");
    strcpy(Book[2].book_author, "H G Wells");
    Book[2].book_holder = 1;
    Book[2].book_borrow_date = 12;
    Book[2].book_return_date =20;

    strcpy(Book[3].book_name, "Divine Comedy");
    strcpy(Book[3].book_author, "Dante");
    Book[3].book_holder = -1;
    Book[3].book_borrow_date = 0;
    Book[3].book_return_date = 0;
    
    strcpy(Book[4].book_name, "Ancient Mariner");
    strcpy(Book[4].book_author, "Coleridge");
    Book[4].book_holder = 1;
    Book[4].book_borrow_date = 10;
    Book[4].book_return_date =20;


    quickSortIterative(Book, 0, 4);

    
    
    char search_name[MAX_NAME_LENGTH];
    
    printf("\nLibrarian Mode");
    
    int option;
    
    printf("\n\n1. Search For A Book\n2. Exit");
   
    while(1)
        
    {
        
         printf("\n\nSelect Option : ");
         scanf("%d",&option);
         
         if(option==1)
             
         {
             
           printf("\nEnter the name of the book to search : ");
           getchar(); 
           fgets(search_name, sizeof(search_name), stdin);
           search_name[strcspn(search_name, "\n")] = '\0';
    
           int result = binarySearch(Book,0,4,search_name);
    
           if(result!=-1)
              
           {
               
              printf("\nBook Name : %s", Book[result].book_name);
              printf("\nBook Author : %s", Book[result].book_author);
              printf("\nBook Holder : ");

              if(Book[result].book_holder==-1)
              {
                 printf("Library");
              }

              else
              {
                  printf("Member");
              }
          
              printf("\nBook Borrow Date : %d", Book[result].book_borrow_date);
              printf("\nBook Return Date : %d", Book[result].book_return_date);
              printf("\n");
    
              if(Book[result].book_holder==-1)
              {
                  printf("\nBook is in library.");
              }

              else
              {
                  printf("\nBook is not available in the library.");
              }
              
           }

           else
           {
               printf("\nBook not found in the library.");
           }
            

         }

         else if(option==2)
         {

            printf("\nExiting .....");
            printf("\n\n");
            exit(0);

         }
    }

    return 0;

}
