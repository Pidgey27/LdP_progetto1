#include <iostream>
#include <vector>
#include "Date.h"

//-----------------Configuration-------------------------------
#define DEFAULT_NOME_AUTORE         ""
#define DEFAULT_COGNOME_AUTORE      ""
#define DEFAULT_TITOLO              ""
#define DEFAULT_ISBN                "000-000-000-0"

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
    
    //Constructor
    Book(std::string nome_autore = DEFAULT_NOME_AUTORE, std::string cognome_Autore = DEFAULT_COGNOME_AUTORE, std::string titolo = DEFAULT_TITOLO, 
        std::string isbn = DEFAULT_ISBN, int yearOfPublication = DEFAULT_YEAR, int monthOfPublication = DEFAULT_MONTH , int dayOfPublication = DEFAULT_DAY,
        bool default_stato = 1);

    std::string getTitolo();
    std::string getNomeAutore();
    std::string getCognomeAutore();
    std::string getISBN();
    std::string getDate();
    bool getStato();
    

    void setTitolo(std::string titolo);
    void setNomeAutore(std::string nomeAutore);
    void setCognomeAutore(std::string cognomeAutore);
    void setISBN(std::string isbn);
    void setDate(int year, int month, int day);
    void setStato(bool occupato);
    
};
std::ostream& operator << (std::ostream& os, Book book);
bool operator == (Book a, Book b);
bool operator != (Book a, Book b);