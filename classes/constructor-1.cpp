#include <iostream>
using namespace std;

class Date {
  public:
    int day;
    int month;
    int year;

    // constructor default
    Date() {
      day = 1;
      month = 1;
      year = 1970;
    }
};

int main()
{
  Date d1; // It's using the default constructor

  cout << d1.day << "/" << d1.month << "/" << d1.year << endl;

  return 0;
}