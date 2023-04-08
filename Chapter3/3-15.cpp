#include <iostream>
using namespace std ;

class Date {
    private:
        int month;
        int day;
        int year;
    public:

        Date(int m, int d, int y)
        {
            setMonth(m);
            setDay(d);
            setYear(y);
        }
        void setDay(int d)
        {
            day = d;
        }
        void setYear(int y)
        {
            year = y;
        }
        void setMonth(int m)
        {
            if (m > 0 && m < 13)
            {
                month = m ;
            }else
            {
                month = 1 ;
            }
        }
        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month ;
        }
        int getYear()
        {
            return year ;
        }
        void displayDate()
        {
            cout << getMonth() << " / " << getDay() << " / " << getYear() << endl;
        }
};

int main() {
    Date date(15,20,2015);
    date.setMonth(6);
    date.displayDate();
}