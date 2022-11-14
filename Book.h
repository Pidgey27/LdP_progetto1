#include "date.h"
#include "isbn.h"

class book
{
private:
    std::string m_titolo;
    std::string m_nome_Autore;
    std::string m_cognome_Autore;
    bool m_stato;
    date m_data_Copyright{date(0,0,0)};
    isbn m_codice_Isbn;

public:
    book(std::string nome_autore, std::string cognome_Autore, std::string titolo, isbn isbn)
        : m_nome_Autore(nome_autore), m_cognome_Autore(cognome_Autore), m_titolo(titolo), m_codice_Isbn(isbn) //ToDo isbn not working: wrong allocation of memory
    {}
    ~book();
    std::string getTitolo(){return m_titolo;}
    std::string getNomeAutore(){return m_nome_Autore;}
    std::string getCognomeAutore(){return m_cognome_Autore;}
};