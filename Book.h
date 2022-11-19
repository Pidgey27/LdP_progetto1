#include <iostream>
#include <vector>
#include "Date.h"

#define DEFAULT_STRING  ""
#define DEFAULT_ISBN "000-000-000-0"

class Book
{
private:
    std::string m_titolo;
    std::string m_nome_Autore;
    std::string m_cognome_Autore;
    bool m_stato;
    Date m_data_Copyright;
    std::string m_codice_Isbn;

    bool check_ISBN(std::string isbn);

public:
    
    Book(std::string nome_autore = DEFAULT_STRING, std::string cognome_Autore = DEFAULT_STRING, std::string titolo = DEFAULT_STRING, std::string isbn = DEFAULT_ISBN, int yearOfPublication = 1, int monthOfPublication = 1 , int dayOfPublication = 1, bool default_stato = 1);

    std::string getTitolo();
    std::string getNomeAutore();
    std::string getCognomeAutore();
    std::string getISBN();
    std::string getData();
    void setDate(int year, int month, int day);
    
};
std::ostream& operator << (std::ostream& os, Book book);
bool operator == (Book a, Book b);
bool operator != (Book a, Book b);