#include <iostream>
#include <sstream>
using namespace std;

class Date {
  // The class members are private by default
  public:
    int day = 1; // default values
    int month = 1;
    int year = 1970;

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

  // Direct List Initialization
  Date d2{3, 2, 2020};

  cout << d2.toString() << endl;

  return 0;
}