#include <stdexcept>
#include <string>
#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    Date(int year, int month, int day);
    void setDate(int year, int month, int day);
    std::string getDate();
    bool checkDate(int year, int month, int day);
};
#endif