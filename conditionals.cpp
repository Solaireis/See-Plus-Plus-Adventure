#include <iostream>

using namespace std;

bool IsLeapYear (int year);

int main()
{
    int year;
    cout << "Enter a year: "
    << endl;
    cin >> year;
    if (IsLeapYear(year))
    {
        cout << "It is a leap year." << endl;
    }
    else
    {
        cout << "It is not a leap year." << endl;
    }
    return 0;
}

bool IsLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}