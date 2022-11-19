#include <stdexcept>
#include <string>

#ifndef DATE_H
#define DATE_H

//-----------------Configuration-------------------------------
#define DEFAULT_YEAR                0
#define DEFAULT_MONTH               1
#define DEFAULT_DAY                 1


class Date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    //Constructor
    Date(int year = DEFAULT_YEAR, int month = DEFAULT_MONTH, int day = DEFAULT_DAY);
    
    void setDate(int year, int month, int day);
    std::string getDate();
    bool checkDate(int year, int month, int day);
};
#endif