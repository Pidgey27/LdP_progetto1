#include <string>

class isbn
{
private:
    int n1;
    int n2;
    int n3;
    char x;

public:
    isbn(int primo, int secondo, int terzo, char carattere)
        :n1(primo), n2(secondo), n3(terzo), x(carattere)
    {}
    /*
    void setIsbn(int primo, int secondo, int terzo, char carattere)
    {
        n1 = primo;
        n2 = secondo;
        n3 = terzo;    
        x = carattere; 
    }

    std::string getIsbn() { return std::to_string(n1) + " - " + std::to_string(n2) + " - " + std::to_string(n3) + " - " + x ; }*/
};