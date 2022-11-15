#include "date.h"
#include <string>
class book
{
private:
    std::string m_titolo;
    std::string m_nome_Autore;
    std::string m_cognome_Autore;
    bool m_stato;
    date m_data_Copyright{date(0,0,0)};
    std::string m_codice_Isbn;

public:
    book(std::string nome_autore, std::string cognome_Autore, std::string titolo, std::string isbn)
        : m_nome_Autore(nome_autore), m_cognome_Autore(cognome_Autore), m_titolo(titolo)
    {
        //new std::string[4] substring;
    }
    ~book();
    std::string getTitolo(){return m_titolo;}
    std::string getNomeAutore(){return m_nome_Autore;}
    std::string getCognomeAutore(){return m_cognome_Autore;}
};