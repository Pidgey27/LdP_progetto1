#include "Date.h"
#include "isbn.h"
using namespace std;

class book
{
private:
    string m_titolo;
    string m_nome_Autore;
    string m_cognome_Autore;
    bool m_stato;
    date m_data_Copyright;
    isbn m_codice_Isbn;

public:
    book();
    ~book();
    string Titolo(){return m_titolo;}
};
book::book(string nome_autore, string cognome_Autore, string titolo, isbn isbn)
            : m_nome_Autore(nome_autore), m_cognome_Autore(cognome_Autore), m_titolo(titolo), m_codice_Isbn(isbn)
{}

book::~book()
{
}

