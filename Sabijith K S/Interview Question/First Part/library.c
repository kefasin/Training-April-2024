#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"
#include "quicksortiterative.h"
#include "binarysearch.h"
#include "addborrow.h"
#include "printborrower.h"

int main()
    

{
    
    struct Library Book[10];
    struct Borrow Borrower[5];

    
    strcpy(Book[0].book_name, "The Great Gatsby");
    strcpy(Book[0].book_author, "Scott Fitzgerald");
    Book[0].book_holder = -1;
    Book[0].num_of_borrowers=0;
    Book[0].borrower_list=NULL;

    strcpy(Book[1].book_name, "Alice In Wonderland");
    strcpy(Book[1].book_author, "Lewis Carrol");
    Book[1].book_holder = -1;
    Book[1].num_of_borrowers=0;
    Book[1].borrower_list=NULL;

    strcpy(Book[2].book_name, "Time Machine");
    strcpy(Book[2].book_author, "H G Wells");
    Book[2].book_holder = -1;
    Book[2].num_of_borrowers=0;
    Book[2].borrower_list=NULL;

    strcpy(Book[3].book_name, "Divine Comedy");
    strcpy(Book[3].book_author, "Dante");
    Book[3].book_holder = -1;
    Book[3].num_of_borrowers=0;
    Book[3].borrower_list=NULL;
    
    strcpy(Book[4].book_name, "Ancient Mariner");
    strcpy(Book[4].book_author, "Coleridge");
    Book[4].book_holder = -1;
    Book[4].num_of_borrowers=0;
    Book[4].borrower_list=NULL;


    quickSortIterative(Book, 0, 4);

    
    
    char search_name[MAX_NAME_LENGTH];
    
    printf("\nLibrarian Mode");
    
    int option;
    
    printf("\n\n1. Search For A Book\n2. Borrow A Book \n3. List The Borrowers Of Book \n4. Exit");
   
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
          
              printf("\nNumber Of Borrowers : %d",Book[result].num_of_borrowers);
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
             int borrowerid=0;
             printf("\nEnter The Name Of The Book To Borrow : ");
             getchar(); 
             fgets(search_name, sizeof(search_name), stdin);
             search_name[strcspn(search_name, "\n")] = '\0';
             int result = binarySearch(Book,0,4,search_name);
             if(result==-1)
             {
                 printf("\nNo Such Book In Library.");
             }
             else
             {
                 printf("\nBorrowing A Book .....");
                 printf("\n\nEnter Details Of Borrower.\n");
                 printf("\nEnter Borrower Name : ");
                 scanf("%s",Borrower[borrowerid].borrower_name);
                 printf("Enter Borrow Date : ");
                 scanf("%d",&Borrower[borrowerid].borrow_date);
                 printf("Enter Return Date : ");
                 scanf("%d",&Borrower[borrowerid].return_date);

                 addBorrower(&Book[result], Borrower[borrowerid].borrower_name, Borrower[borrowerid].borrow_date, Borrower[borrowerid].return_date);
                 Book[result].book_holder=1;
                 
             }
             

         }

          else if(option==3)
         {

             printf("\nEnter The Book Name : ");
             getchar(); 
             fgets(search_name, sizeof(search_name), stdin);
             search_name[strcspn(search_name, "\n")] = '\0';
             int result = binarySearch(Book,0,4,search_name);
             if(result==-1)
             {
                 printf("\nNo Such Book In Library.");
             }
             else
             {
                 printBorrowers(Book[result]);
             }
           
         }

         else if(option==4)
         {

            printf("\nExiting .....");
            printf("\n\n");
            exit(0);

         }
    }

    return 0;

}

