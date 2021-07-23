#include <iostream>
using namespace std;

int main()
{
  /*
    What is a pointer?
    -------------------------
    Pointer is a variable whose value is
    the address of another variable, i.e,
    direct address of the memory location
  */

  int value = 1234;
  int &ref = value;
  int *pointer = &value;

  cout << value << "\t" << ref << "\t" << pointer << endl;
  cout << *pointer << endl; // dereference

  return 0;
}