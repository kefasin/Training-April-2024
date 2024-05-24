#include <stdio.h>
#include "library.h"
#include "printborrower.h"

void printBorrowers(struct Library book)
{
    struct Borrow *current = book.borrower_list;

    printf("\nList of Borrowers for Book : %s\n", book.book_name);

    while (current != NULL) {
        printf("\nBorrower Name: %s\n", current->borrower_name);
        printf("Borrow Date: %d\n", current->borrow_date);
        printf("Return Date: %d\n", current->return_date);
        printf("Duration = %d Days.",current->return_date - current->borrow_date);

        current = current->next_borrower;
    }
}
