#include "date.h"
#include <string>
#include <vector>
#include <iostream>

class Book
{
private:
    std::string m_titolo;
    std::string m_nome_Autore;
    std::string m_cognome_Autore;
    bool m_stato;
    date m_data_Copyright{date(0,0,0)};
    std::string m_codice_Isbn;

public:
    Book(std::string nome_autore, std::string cognome_Autore, std::string titolo, std::string isbn)
        : m_nome_Autore(nome_autore), m_cognome_Autore(cognome_Autore), m_titolo(titolo)
    {
        if(!check_ISBN(isbn))
            throw std::runtime_error ("Invalid ISBN code");
    }
    //~Book();
    std::string getTitolo(){return m_titolo;}
    std::string getNomeAutore(){return m_nome_Autore;}
    std::string getCognomeAutore(){return m_cognome_Autore;}
    std::string getISBN() {return m_codice_Isbn;}
    std::string getData() { return m_data_Copyright.getDate(); }
    bool check_ISBN(std::string isbn) {
        std::string delimiter="-";
        std::vector<std::string> words;
        int pos;
        while ((pos=isbn.find(delimiter))!=std::string::npos){
            words.push_back(isbn.substr(0, pos));
            isbn.erase(0, pos+1);
        }
        words.push_back(isbn);
        if(words.size()!=4)
            return false;
        for(int i=0; i<3; i++)
            if(words[i].find_first_not_of("0123456789")!=std::string::npos)
                return false;
        return true;
    }
};
bool operator == (Book a, Book b) {
    if ((a.getISBN().compare(b.getISBN())) == 0)
        return true;
    return false;
}
bool operator != (Book a, Book b) {
    if ((a.getISBN().compare(b.getISBN())) == 0)
        return false;
    return true;
}
std::ostream& operator << (std::ostream& os, Book book) {
    return os << book.getTitolo() << std::endl << book.getNomeAutore() + " " + book.getCognomeAutore() << std::endl << book.getISBN() << std::endl << book.getData();
}