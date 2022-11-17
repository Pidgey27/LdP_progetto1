#include <iostream>
#include <vector>
#include "Date.h"

class Book
{
private:
    std::string m_titolo;
    std::string m_nome_Autore;
    std::string m_cognome_Autore;
    bool m_stato;
    Date m_data_Copyright{Date(0,0,0)};
    std::string m_codice_Isbn;

    bool check_ISBN(std::string isbn);

public:
    Book(std::string nome_autore, std::string cognome_Autore, std::string titolo, std::string isbn);
    Book(std::string nome_autore, std::string cognome_Autore, std::string titolo, std::string isbn, int yearOfPublication, int monthOfPublication, int dayOfPublication);

    std::string getTitolo();
    std::string getNomeAutore();
    std::string getCognomeAutore();
    std::string getISBN();
    std::string getData();
    void setDate(int year, int month, int day);
    
};