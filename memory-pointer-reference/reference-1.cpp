#include <iostream>
using namespace std;

int main()
{
  int a = 10;

  cout << a << endl; // value
  cout << &a << endl; // address of a

  string name = "Paul";
  cout << name << "\t" << &name << endl;

  return 0;
}
