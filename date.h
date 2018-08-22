#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
    friend ostream &operator<< (ostream &, const Date &);
public:
    Date(int m=1, int d=1, int y=2000);
    void setDate(int, int, int);
    Date &operator++(); //prefix
    Date operator++(int); //postfix
    const Date &operator+=(int);
    bool leapYear(int) const;
    bool endOfMonth(int) const;
private:
    int month;
    int day;
    int year;

    static const int days[]; //amount of days in the months
    void helpIncrement();
};

#endif // DATE_H
