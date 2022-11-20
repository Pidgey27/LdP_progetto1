#include "Book.h"

    Book::Book(std::string nome_autore, std::string cognome_Autore, std::string titolo, std::string isbn, int yearOfPublication, int monthOfPublication, int dayOfPublication, bool default_stato)
        : m_nome_Autore(nome_autore), m_cognome_Autore(cognome_Autore), m_titolo(titolo), m_codice_Isbn(isbn)
    {
        if(!check_ISBN(isbn))
            throw std::runtime_error ("Invalid ISBN code");
        m_codice_Isbn = isbn;
        m_data_Copyright = Date(yearOfPublication, monthOfPublication, dayOfPublication);
    }
    //~Book(); //ToDo distruttore se vogliamo

    std::string Book::getTitolo(){return m_titolo;}
    std::string Book::getNomeAutore(){return m_nome_Autore;}
    std::string Book::getCognomeAutore(){return m_cognome_Autore;}
    std::string Book::getISBN() {return m_codice_Isbn;}
    std::string Book::getDate() { 
        std::string data  = m_data_Copyright.getDate();
        if((data.compare(std::to_string(DEFAULT_DAY)+"/"+std::to_string(DEFAULT_MONTH)+"/"+std::to_string(DEFAULT_YEAR))) == 0)
            return "Copyright date not avaiable for this book \n" ;
        return data;
    }
    
    void Book::setTitolo(std::string titolo){this->m_titolo = titolo;}
    void Book::setNomeAutore(std::string nomeAutore){this->m_nome_Autore = nomeAutore;}
    void Book::setCognomeAutore(std::string cognomeAutore){this->m_cognome_Autore = cognomeAutore;}
    void Book::setISBN(std::string isbn){
        if(!check_ISBN(isbn))
            throw std::runtime_error ("Invalid ISBN code");
        this->m_codice_Isbn = isbn;
    }
    void Book::setDate(int year, int month, int day) { m_data_Copyright.setDate(year, month, day);}
    
    bool Book::check_ISBN(std::string isbn) {
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
        return os << book.getTitolo() << std::endl << book.getNomeAutore() + " " + book.getCognomeAutore() << std::endl << book.getISBN() << std::endl << book.getDate() << "\n";
    }

    bool Book::getStato(){ return m_stato; }
    void Book::setStato(bool occupato){
        m_stato = occupato;
    }