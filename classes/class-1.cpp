#include <iostream>
#include <sstream>
using namespace std;

class Date {
  // The class members are private by default
  public:
    int day;
    int month;
    int year;

    string toString() {
      stringstream ss;
      ss << day << "/" << month << "/" << year;
      return ss.str();
    }
};

int main()
{
  Date d1;
  d1.day = 3;
  d1.month = 2;
  d1.year = 2020;

  cout << d1.toString() << endl;

  return 0;
}