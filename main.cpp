#include "Book.h"
using namespace std;

int main()
{
    Book my_favourite_book = Book("john", "Foster Wallace","Una cosa divertente che non farò mai piu'","887-521-837-4");
    std::vector<Book> shelf(10);

    Date data_libro(2000,12,31);
    try{
        data_libro.setDate(2000,56,6);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << " as expected " << '\n' ;
    }

    my_favourite_book.setTitolo("farò");
    cout << my_favourite_book;
    my_favourite_book.setDate(2000,12,6);
    cout << my_favourite_book;
    Book book2 = my_favourite_book;

    if(book2 == my_favourite_book)
        cout << "operator == working \n";
    book2 = Book("john", "Foster Wallace","Una cosa divertente che non farò mai piu'","887-567-837-4");
    if(book2 != my_favourite_book)
        cout << "operator != working \n ";

    shelf[3] = Book("john", "Foster Wallace","Una cosa divertente che non farò mai piu'","887-567-837-4",2000,12,12);
    cout << shelf[3];

    return 0;
}