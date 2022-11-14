#include "Date.h"
#include "isbn.h"
using namespace std;


class Book
{
private:
    string titolo;
    string nome_Autore;
    string cognome_Autore;
    bool stato;
    Date data_Copyright;
    isbn codice_isbn;

public:
    Book(/* args */);
    ~Book();
    string Titolo(){return titolo;}
};

Book::~Book()
{
}
