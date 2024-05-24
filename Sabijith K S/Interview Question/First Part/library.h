#define MAX_NAME_LENGTH 100

struct Borrow
{
    char borrower_name[MAX_NAME_LENGTH];
    int borrow_date;
    int return_date;
    struct Borrow *next_borrower;
};

struct Library
{
    char book_name[MAX_NAME_LENGTH];
    char book_author[MAX_NAME_LENGTH];
    int  book_holder;
    int num_of_borrowers;
    struct Borrow *borrower_list;
    
};

