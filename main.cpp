#include "Book.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Book my_favourite_book = Book("john", "Foster Wallace","Una cosa divertente che non farò mai piu'","887-521-837-4",1990,4,2);
    Book booktest = Book();
    
    std::vector<Book> shelf(10);
    cout << my_favourite_book.getData();
    cout << my_favourite_book;
    bool test = booktest != my_favourite_book ;
    cout << test;
    return 0;
}

    