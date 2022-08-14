#include <iostream>
using namespace std;

const double MIN_WAGE = 1500;

class Employee {
  public:
    string name;

  private:
    double wage = MIN_WAGE;

  public:
    double getWage() const { // the const signature indicates that the method won't change the object's state
      return wage;
    }

    void setWage(double w) {
      if (w < MIN_WAGE) return;
      wage = w;
    }
};

int main()
{
  Employee empl1;
  empl1.name = "Paul Smith";
  empl1.setWage(1600);
  empl1.setWage(1000);

  cout << "US$" << empl1.getWage() << endl; // US$1600

  return 0;
}