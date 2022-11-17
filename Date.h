#include <stdexcept>

class date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    date(int year, int month, int day)
    {
        setDate(year, month, day);
    }

    void setDate(int year, int month, int day)
    {
        if(checkDate(year, month, day)){
            m_year = year;
            m_month = month;
            m_day = day;
            return;
        }
        throw std::runtime_error("Date input is invalid");
    }

    std::string getDate() { return to_string(m_day)+ "/"+ to_string(m_month)+ "/"+ to_string(m_year);}

    bool checkDate(int year, int month, int day) {
        if(month < 1 || month > 12)
            return false;
        if(month  == 11 || month == 4 || month == 6 || month == 9 ){
            if (day < 1 || day > 30)
                return false;
        }
        if (month == 2){
            if (year %4 == 0){
                if(day < 1 || day > 29)
                    return false;
            }
            else{
                if(day < 1 || day > 28)
                    return false;
            }
        }
        if(day < 1 || day > 31)
            return false;
        return true;
    }
};