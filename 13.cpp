#include <iostream>
#include <stdlib.h>
using namespace std;
class date
{
    int day, month, year;

public:
    date()
    {
        cout << "Enter today's date in DD/MM/YYYY format:";
        cin >> day >> month >> year;
    }
    void operator++()
    {
        day = day + 1;
        corr();
    }
    void operator--()
    {
        day = day - 1;
        corr();
    }
    void corr();
    int ml();
    void display()
    {
        cout << "\nDate:" << day << "/" << month << "/" << year << endl;
    }
};
int date::ml()
{
    if (month < 1)
    {
        year -= 1;
        month = 12;
    }
    if (month > 12)
    {
        year += 1;
        month = 1;
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if(month == 2)
    {
        if (year % 400 == 0)
        {
            return 29;
        }
        else if(year % 100 == 0)
        {
            return 28;
        }
        else if(year % 4 == 0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 30;
    }
}
void date::corr()
{
    int length;
    length = ml();
    if (day > length)
    {
        month += 1;
        length = ml();
        day = 1;
    }
    else if(day < 1)
    {
        month -= 1;
        length = ml();
        day = length;
    }
}

int main()
{
    date d;
    int ch;
    while (1)
    {
        cout << "\n1.Previousdate\n2.Nextdate\n3.Exit\n\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            --d;
            d.display();
            break;
        case 2:
            ++d;
            d.display();
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
