#define MAX_NAME_LENGTH 100

struct Library
{
    char book_name[MAX_NAME_LENGTH];
    char book_author[MAX_NAME_LENGTH];
    int  book_holder;
    int book_borrow_date;
    int book_return_date;
    
};


