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
        if(!check_ISBN(isbn))
            throw std::runtime_error ("Invalid ISBN code");
    }
    ~book();
    std::string getTitolo(){return m_titolo;}
    std::string getNomeAutore(){return m_nome_Autore;}
    std::string getCognomeAutore(){return m_cognome_Autore;}
    bool check_ISBN(std::string isbn) {
        const std::string num_check = isbn.substr(0, isbn.length() - 1);
        int n_delimiters = 0;
        for (char const &ch: num_check) {
            if (!(std::isdigit(ch) && (ch != '-')))
                return false;
            if (ch == '-')
                n_delimiters++;
        }
        if (n_delimiters != 3)
            return false;
    }
};