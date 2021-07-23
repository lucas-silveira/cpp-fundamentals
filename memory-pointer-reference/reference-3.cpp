#include <iostream>
using namespace std;

int main()
{
  // int &nullRef; // It is not possible to create a null variable.
  // Once We have set a memory reference, It's not possible to change the reference
  string greeting = "Hi!";
  string &ref = greeting; // set memory reference

  cout << greeting << "\t" << ref << endl;

  string name = "Peter";
  ref = name; // set value

  cout << name << "\t" << ref << "\t" << greeting << endl;
  cout << &name << "\t" << &ref << "\t" << &greeting << endl;

  return 0;
}