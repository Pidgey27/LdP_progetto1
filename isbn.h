#include <string>

using namespace std;

class isbn
{
private:
    int n1;
    int n2;
    int n3;
    char x;

public:
    isbn(int primo, int secondo, int terzo, char carattere)
    {
        setisbn(primo, secondo, terzo, carattere);
    }

    void setisbn(int primo, int secondo, int terzo, char carattere)
    {
        
        checkTerzetto(primo,secondo,terzo);

        x = carattere; 
    }

    string getIsbn() { return to_string(n1) + " - " + to_string(n2) + " - " + to_string(n3) + " - " + x ; }
    bool checkTerzetto(int primo, int secondo, int terzo){
        n1= primo;
        n2 = secondo;
        n3 = terzo;
    }

};