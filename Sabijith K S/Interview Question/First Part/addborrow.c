#include "library.h"
#include "addborrow.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void addBorrower(struct Library *book, const char *name, int borrow_date, int return_date)
{
    struct Borrow *new_borrower = (struct Borrow*)malloc(sizeof(struct Borrow));
    
    if (new_borrower == NULL)
    {
        printf("Memory allocation failed for new borrower.\n");
        return;
    }
   
    strcpy(new_borrower->borrower_name, name);
    new_borrower->borrow_date = borrow_date;
    new_borrower->return_date = return_date;
    new_borrower->next_borrower = book->borrower_list;
    book->borrower_list = new_borrower;
    book->num_of_borrowers++;
    
}
